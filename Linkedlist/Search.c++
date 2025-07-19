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
class list{
    private:
        Node* head;
        Node* tail;
    
    public:
        list(){
            head=tail=NULL;
        }

        void push_front(int val){
            Node* NewNode = new Node(val);
            if(head==NULL){
                head=tail=NewNode;
                return;
            }
            else{
                NewNode->next=head;
                head=NewNode;
            }
        }
        void push_back(int val){
            Node* NewNode = new Node(val);
            if(head==NULL){
                head=tail=NewNode;
                return;
            }
            else{
                tail->next=NewNode;
                tail=NewNode;
            }
        }
        int search(int key){
            Node* temp = head;
            int idx = 0;
            while(temp!=NULL){
                if(temp->data==key){
                    return idx;
                }
                temp=temp->next;
                idx++;
            }
            return -1;
        }
        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
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

    return 0;
}