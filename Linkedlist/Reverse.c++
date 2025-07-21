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
class List{
    private:
        Node* head;
        Node* tail;
    public:
        List(){
            head=tail=NULL;
        }

        //Push-front function
        void push_front(int val){
            Node* NewNode = new Node(val);
            if(head==NULL){
                head=tail=NewNode;
                return;
            }
            NewNode->next = head;
            head = NewNode;
        }

        //Push-back function
        void push_back(int val){
            Node* NewNode = new Node(val);
            if(head==NULL){
                head=tail=NewNode;
                return;
            }
            tail->next = NewNode;
            tail = NewNode;
        }

        //Pop-front function
        void pop_front(){
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        
        //Pop-back function
        void pop_back(){
            if(head==NULL){
                cout<<"LL is Empty!!"<<endl;
                return;
            }
            if(head==tail){
                delete tail;
                head=tail=NULL;
                return;
            }
            else{
                Node* temp = head;
                while(temp->next!=tail){
                    temp=temp->next;
                }
                temp->next = NULL;
                delete tail;
                tail = temp;
            }
        }

        //Insert middle function
        void Insert_middle(int val,int pos){
            if(pos<0)return;
            else if(pos==0){
                push_front(val);
                return;
            }
            else{
                Node* NewNode = new Node(val);
                Node* temp = head;

                for(int i=0;i<pos-1;i++){
                    if(temp==NULL){
                        cout<<"Invalid Position!!"<<endl;
                        return;
                    }
                    temp=temp->next;
                }
                NewNode->next = temp->next;
                temp->next = NewNode;
            }
        }

        void reverse(){
            Node* prev = NULL;
            Node* curr = head;
            Node* next = NULL;
            Node* oldhead = head;

            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head=prev;//head is reversed by prev
            tail=oldhead;//tail is now pointed out to the oldhead pos
        }
        //Print Function
        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    List ll;
    ll.push_front(21);
    ll.push_front(22);
    ll.push_front(23);
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.print();

    ll.Insert_middle(34,2);
    ll.Insert_middle(35,3);
    ll.Insert_middle(36,4);
    ll.print();

    ll.pop_front();
    ll.pop_back();
    ll.print();

    ll.reverse();
    ll.print();
}