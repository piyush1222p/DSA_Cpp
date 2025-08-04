#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size()==0;
    }
};
int main(){
    Stack ll;

    ll.push(10);
    ll.push(20);
    ll.push(30);

    while(!ll.empty()){
        cout<<ll.top()<<" ";
        ll.pop();
    }
    return 0;
}