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
class Circular_LL{
    private:
        Node* head;
        Node* tail;
    public:
        Circular_LL(){
            head=tail=NULL;
        }

        void Push_front(int val){//Push front function
            Node* newnode = new Node(val);
            if(head==NULL){//LL is empty
                head=tail=newnode;
                tail->next = head;
            }
            else{//LL is not empty
                newnode->next = head;
                head = newnode;
                tail->next = head;
            }
        }

        void print(){//Print function
            if(head==NULL){
                cout<<"List is Empty!!"<<endl;
                return;
            }
            Node* temp = head;

            do{
                cout<<temp->data<<"->";
                temp = temp->next;
            }while(temp!=head);
            
            cout<<"(Back to "<<head->data<<")"<<endl;//Circular LL nature instead of NULL
        }
};
int main(){
    Circular_LL CLL;

    CLL.Push_front(21);
    CLL.Push_front(22);
    CLL.Push_front(23);

    CLL.print();

    return 0;
}