#include <iostream>
using namespace std;
int main(){
    string name = "John Doe";
    cout<<name.find("J")<<endl; // Output: 0
    cout<<name.find("o")<<endl; // Output: 1
    cout<<name.find("D")<<endl; // Output: 4
    cout<<name.find("x")<<endl; // Output: -1 (not found)
    cout<<name.find("o", 2)<<endl; // Output: 3 (search starts from index 2)
    cout<<name.find("o", 5)<<endl; // Output: -1 (not found after index 5)
    cout<<name.find("o", 0, 2)<<endl; // Output: 1 (searches for "o" starting from index 0, but only checks the first 2 characters)

    return 0;
}