#include<iostream>
#include<deque>
using namespace std;
int main(){
    //Deque in C++ STL
    /*Deque is known as doubly ended queue*/
    deque<int> Age = {20, 15, 14, 16, 17, 18, 19};

    Age.push_back(25);  // Adds an element at the end of the Age deque
    Age.push_back(35);
    Age.push_back(45);
    Age.push_back(55);

    Age.push_front(10);  // Adds an element at the front of the Age deque
    Age.push_front(5);
    Age.push_front(0);
    Age.push_front(-5);

    cout << "Size of Age deque after push_back and push_front: " << Age.size() << endl;   // Size of the Age deque after pushing elements

    Age.pop_back();   // Removes the last element of the Age deque
    Age.pop_back();
    Age.pop_back();

    Age.pop_front();   // Removes the first element of the Age deque
    Age.pop_front();
    Age.pop_front();

    cout << "Size of Age deque after pop_back and pop_front: " << Age.size() << endl;   // Size of the Age deque after popping elements

    for (int element:Age)
    {
        cout << element << " ";
    }

    /*size,erase,clear,insert,remove,reverse,sort,unique,merge,splice,swap,resize,empty,front,back,begin,end,rbegin,rend
    are some of the functions in deque*/

    /*In deque random access to the memory can be done but in the list it is not possible*/

    cout<<endl;
    cout<<Age[2]<<endl;//Random access to the memory
    return 0;
}