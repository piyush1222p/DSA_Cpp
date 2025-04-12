#include <iostream>
#include <string>
//For string manipulation functions(without adding this header file still with the help of iostream we can use string)
using namespace std;
int main(){
    string Str = "Piyush Shukla";//Dynamic in naeture and can be changed at any time
    cout << Str << endl; // Prints the string
    //Str = "Hello World"; // Assigning a new string value
    //cout << Str << endl; // Prints the new string

    string str1 = "Mamta Shukla";
    cout<<str1<<endl; // Prints the string

    string str3=str1+" "+Str; // Concatenating two strings with a space in between
    cout<<str3<<endl; // Prints the concatenated string
    
    cout<<str3.length()<<endl; // Prints the length of the concatenated string
    cout<<str3.size()<<endl; // Prints the size of the concatenated string
    cout<<str3.capacity()<<endl; // Prints the capacity of the concatenated string
    return 0;
}