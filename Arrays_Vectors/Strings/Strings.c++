#include <iostream>
#include <string>
//For string manipulation functions(without adding this header file still with the help of iostream we can use string)
using namespace std;
int main(){
    string Str = "Piyush Shukla";//Dynamic in naeture and can be changed at any time
    cout << Str << endl; // Prints the string
    Str = "Hello World"; // Assigning a new string value
    cout << Str << endl; // Prints the new string

    return 0;
}