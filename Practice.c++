#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next =NULL;
        }
};
class list{
    private:
        Node* head;
        Node* tail;
    
    public:
        list(){
            head=tail=NULL;
        }

        void push_front(int val){
            Node* newnode = new Node(val);
            if(head==NULL){//head == NULL
                head=tail=newnode;
                return;
            }
            //head !=NULL
            newnode->next=head;
            head=newnode;
        }
        void push_back(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head=tail=NULL;
                return;
            }
            tail->next=newnode;
            tail=newnode;
        }
        void pop_front(){
            if(head==NULL){
                cout<<"LL is empty!!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        void pop_back(){
            if(head==NULL){
                cout<<"LL is empty!!"<<endl;
                return;
            }
            Node* temp = head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
        void insert_middle(int val,int pos){
            if(pos<0)return;
            else if(pos==0){
                push_front(val);
                return;
            }
            else{
                Node* temp = head;
                for(int i = 0; i<pos-1;i++){
                    if(temp==NULL){
                        cout<<"Invalid Position!!"<<endl;
                        return;
                    }
                    temp=temp->next;
                }
                Node* NewNode = new Node(val);
                NewNode->next=temp->next;
                temp->next=NewNode;
            }
        }
        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
};
int main(){
    list ll;
    
    ll.push_front(21);
    ll.push_front(22);
    ll.push_front(23);

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);

    ll.print();

    // ll.pop_front();
    // ll.pop_back();

    ll.print();

    ll.insert_middle(90,4);

    ll.print();
    return 0;
}