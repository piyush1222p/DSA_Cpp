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

        void Push_back(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
            }
            else{
                newnode->prev = tail;
                tail->next = newnode;
                tail = newnode;
            }
        }

        void pop_back(){
            if(head==NULL){
                cout<<"LL is empty!!"<<endl;
                return;
            }
            else{
                Node* temp = tail;
                tail = tail->prev;

                if(tail!=NULL){
                    tail->next = NULL;
                }
                else{
                    head = NULL;//head becomes null when the tail becomes null
                }
                temp->prev = NULL;
                delete temp;
            }
        }

        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"<->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    Doubly_LL DLL;

    DLL.Push_back(1);
    DLL.Push_back(2);
    DLL.Push_back(3);

    DLL.print();

    DLL.pop_back();
    DLL.pop_back();
    DLL.pop_back();

    DLL.print();

    return 0;
}