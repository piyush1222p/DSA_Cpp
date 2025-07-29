#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};
class List{
    private:
        Node*Head;
        Node*Tail;

    public:
        List(){
            Head=Tail=NULL;
        }
        void push_front(int val) {
            Node* newNode = new Node(val);

            if (Head == NULL) {
                Head = Tail = newNode;
                return;
            }

            else {
                newNode->next = Head;
                Head = newNode;
            }
        }
        void insert_middle(int val,int pos){
            if(pos<0)return;
            else if(pos==0){
                push_front(val);
                return;
            }
            else{
                Node* temp = Head;
                for(int i=0;i<pos-1;i++){
                    if(temp==NULL){
                        cout<<"Invalid Position!\n";
                        return;
                    }
                    temp=temp->next;
                }
                Node* newNode = new Node(val);
                newNode->next = temp->next;//retain the value of the left over elements in LL
                temp->next = newNode;//assigning the newnode value to the temp.next ptr
            }
        }
        void print(){
            Node* temp = Head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    List ll;
    ll.push_front(23);
    ll.push_front(23);
    ll.push_front(23);

    ll.print();

    ll.insert_middle(1,2);
    ll.insert_middle(2,3);
    ll.insert_middle(3,5);

    ll.print();
}