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
}