#include <iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
    }
};
int main(){
    Stack S;

    S.push(10);
    S.push(20);
    S.push(30);

    while (!S.empty()){//Prints the stack elements
        cout<<S.top()<<" ";
        S.pop();
    }
    
    return 0;
}