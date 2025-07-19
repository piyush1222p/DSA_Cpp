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
        Node*head;
        Node*tail;
    public:
        List(){
            head=tail=NULL;
        }
        void push_front(int val){
            Node*newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
                return;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
        }
        void pop_front(){
            if(head==NULL){
                cout<<"The linkedlist is empty!!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        void push_back(int val){
            Node*newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
                return;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        void pop_back(){
            if(head==NULL){
                cout<<"The Linkedlist is empty!!"<<endl;
                return;
            }
            
            if(head==tail){
                delete tail;
                head=tail=NULL;
                return;
            }

            else{
                Node*temp = head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
            }
        }
        void print(){
            Node*temp = head;
            while (temp!=NULL){
               cout<<temp->data<<"->";
               temp=temp->next; 
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    List ll;
    ll.push_front(21);
    ll.push_front(23);
    ll.push_front(34);

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);

    ll.print();

    return 0;
}