#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
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

        void Push_back(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
                tail->next = head;
            }
            else{
                newnode->next = head;
                tail->next = newnode;
                tail = newnode;
            }
        }

        void print(){
            Node* temp = head;
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }

            do
            {
                cout<<temp->data<<"->";
                temp = temp->next;
            } while (temp!=head);
            
            cout<<"(Back to "<<head->data<<")"<<endl;
        }
};
int main(){
    Circular_LL CLL;
    CLL.Push_back(1);
    CLL.Push_back(2);
    CLL.Push_back(3);

    CLL.print();

    return 0;
}