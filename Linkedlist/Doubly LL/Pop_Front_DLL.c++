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

        void Push_Front(int val){
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
        void Pop_Front(){
            if(head==NULL){
                cout<<"DLL is empty!!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;

            if(head !=NULL){
                head->prev = NULL;
            }
            temp->next = NULL;
            delete temp;
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
    DLL.Push_Front(21);
    DLL.Push_Front(22);
    DLL.Push_Front(23);

    DLL.print();

    DLL.Pop_Front();
    DLL.Pop_Front();
    DLL.Pop_Front();

    DLL.print();

    return 0;
}