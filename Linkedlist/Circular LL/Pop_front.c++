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

        void push_front(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head=tail=newnode;
                tail->next = head;
            }
            else{
                newnode->next = head;
                head = newnode;
                tail->next = head;
            }
        }

        void pop_front(){
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }
            if(head==tail){
                delete head;
                head=tail=NULL;
                return;
            }
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
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
            cout<<"(Back to Head "<<head->data<<")"<<endl;
        }
};
int main(){
    Circular_LL CLL;
    CLL.push_front(23);
    CLL.push_front(22);
    CLL.push_front(21);
    CLL.push_front(20);

    CLL.print();

    CLL.pop_front();
    CLL.pop_front();
    CLL.pop_front();

    CLL.print();

    return 0;
}