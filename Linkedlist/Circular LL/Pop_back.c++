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

        void push_back(int val){
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

        void pop_back(){
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
            }
            else{
                Node* temp = tail;
                Node* prev = head;

                while(prev->next != tail){
                    prev = prev->next;
                }

                tail = prev;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }

        void print(){
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }
            Node* temp = head;
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

    CLL.push_back(1);
    CLL.push_back(2);
    CLL.push_back(3);

    CLL.print();

    CLL.pop_back();
    CLL.pop_back();
    CLL.pop_back();

    CLL.print();

    return 0;
}