#include <iostream>
#include <list>
using namespace std;
int main(){
    //List in C++ STL
    /*List is a Doubly linkedlist in c++ STL, where we can push/pop the elements from both front and back*/
    list<int> Age = {20, 15, 14, 16, 17, 18, 19};

    Age.push_back(25);  // Adds an element at the end of the Age list
    Age.push_back(35);
    Age.push_back(45);
    Age.push_back(55);

    Age.push_front(10);  // Adds an element at the front of the Age list
    Age.push_front(5);
    Age.push_front(0);
    Age.push_front(-5);

    cout << "Size of Age list after push_back and push_front: " << Age.size() << endl;   // Size of the Age list after pushing elements

    Age.pop_back();   // Removes the last element of the Age list
    Age.pop_back();
    Age.pop_back();

    Age.pop_front();   // Removes the first element of the Age list
    Age.pop_front();
    Age.pop_front();

    cout << "Size of Age list after pop_back and pop_front: " << Age.size() << endl;   // Size of the Age list after popping elements

    for (int element:Age)
    {
        cout << element << " ";
    }
    
    /*size,erase,clear,insert,remove,reverse,sort,unique,merge,splice,swap,resize,empty,front,back,begin,end,rbegin,rend
    are some of the functions in list*/

    /*In list random access to the memory cannot be done but in the deque it is possible*/
    return 0;
}