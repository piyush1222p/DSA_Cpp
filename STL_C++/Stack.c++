#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> Age;

    /*LIFO: Last In First Out*/

    // Adding elements to the stack
    Age.push(20);  // Push 20 onto the stack
    Age.push(15);  // Push 15 onto the stack
    Age.push(14);  // Push 14 onto the stack
    Age.push(16);  // Push 16 onto the stack

    // Adding elements to the stack with emplace function
    Age.emplace(17);  // Emplace 17 onto the stack
    Age.emplace(18);  // Emplace 18 onto the stack
    Age.emplace(19);  // Emplace 19 onto the stack

    // Printing the top element of the stack
    cout << "Top element of the stack: " << Age.top() << endl;  // Print the top element

    // Removing the top element of the stack
    Age.pop();  // Pop the top element

    // Printing the top element of the stack
    cout << "Top element of the stack after pop: " << Age.top() << endl;  // Print the new top element

    // Checking if the stack is empty
    cout << "Is the stack empty: " << Age.empty() << endl;  // Check if the stack is empty

    // Printing the size of the stack
    cout << "Size of the stack: " << Age.size() << endl;  // Print the size of the stack

    // Swapping the elements of two stacks
    stack<int> Age2;  // Create another stack
    Age2.swap(Age);  // Swap the elements of Age and Age2

    // Printing elements of Age2 after swapping
    while (!Age2.empty()) {
        cout << Age2.top() << " ";  // Print the top element
        Age2.pop();  // Pop the top element
    }
    cout << endl;

    return 0;
}