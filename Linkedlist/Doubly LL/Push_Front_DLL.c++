#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};
class Doubly_LL{
    private:
        Node* head;
        Node* tail;
    public:
        Doubly_LL(){
            head=tail=NULL;
        }

        void push_front(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
            }
            else{
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
        }

        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"<->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    Doubly_LL DLL;
    DLL.push_front(21);
    DLL.push_front(22);
    DLL.push_front(23);

    DLL.print();

    return 0;
}