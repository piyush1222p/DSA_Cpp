#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> Age;//max-heap data structure
    priority_queue<int,vector<int>,greater<int>> Age3;//min-heap data structure

    /*Priority Queue: The element with the highest priority is served first*/

    Age.push(20);  // Push 20 into the priority queue
    Age.push(15);  // Push 15 into the priority queue
    Age.push(14);  // Push 14 into the priority queue
    Age.push(16);  // Push 16 into the priority queue

    Age.emplace(18);  // Emplace 18 into the priority queue
    Age.emplace(19);  // Emplace 19 into the priority queue
    Age.emplace(17);  // Emplace 17 into the priority queue

    cout<<"Top element of the priority queue: "<<Age.top()<<endl;  // Print the top element of the priority queue

    Age.pop();  // Pop the top element of the priority queue

    cout<<"Top element of the priority queue after pop: "<<Age.top()<<endl;  // Print the top element of the priority queue after pop

    cout<<"Is the priority queue empty: "<<Age.empty()<<endl;  // Check if the priority queue is empty

    cout<<"Size of the priority queue: "<<Age.size()<<endl;  // Print the size of the priority queue

    priority_queue<int> Age2;  // Create another priority queue
    Age2.swap(Age);  // Swap the elements of Age and Age2

    while (!Age2.empty()){
        cout<<Age2.top()<<" ";  // Print the top element of the priority queue
        Age2.pop();  // Pop the top element of the priority queue
    }
    cout<<endl;
    //reverse priority queue
    Age3.push(15);  // Push 15 into the priority queue
    Age3.push(14);  // Push 14 into the priority queue
    Age3.push(16);  // Push 16 into the priority queue

    Age3.emplace(18);  // Emplace 18 into the priority queue
    Age3.emplace(19);  // Emplace 19 into the priority queue
    Age3.emplace(17);  // Emplace 17 into the priority queue
    
    while (!Age3.empty())
    {
        cout<<Age3.top()<<" "; //print the top element of the priority queue
        Age3.pop(); //pop the top element of the priority queue
    }
    
    return 0;
}