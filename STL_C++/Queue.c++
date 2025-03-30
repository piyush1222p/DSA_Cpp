#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> Age;

    /*FIFO: First In First Out*/

    Age.push(20);  // Push 20 into the queue
    Age.push(15);  // Push 15 into the queue
    Age.push(14);  // Push 14 into the queue
    Age.push(16);  // Push 16 into the queue

    Age.emplace(18);  // Emplace 18 into the queue
    Age.emplace(19);  // Emplace 19 into the queue
    Age.emplace(17);  // Emplace 17 into the queue

    cout<<"Front element of the queue: "<<Age.front()<<endl;  // Print the front element of the queue

    cout<<"Back element of the queue: "<<Age.back()<<endl;  // Print the back element of the queue

    Age.pop();  // Pop the front element of the queue

    cout<<"Front element of the queue after pop: "<<Age.front()<<endl;  // Print the front element of the queue after pop

    cout<<"Is the queue empty: "<<Age.empty()<<endl;  // Check if the queue is empty

    cout<<"Size of the queue: "<<Age.size()<<endl;  // Print the size of the queue

    queue<int> Age2;  // Create another queue
    Age2.swap(Age);  // Swap the elements of Age and Age2

    while (!Age2.empty()){
        cout<<Age2.front()<<" "; // Print the front element of the queue
        Age2.pop(); // Pop the front element of the queue
    }
    
    return 0;
}