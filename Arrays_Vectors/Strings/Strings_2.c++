#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;

    cout << "Enter the first string: ";
    getline(cin,str1);

    for (int i = 0; i < str1.length(); i++)
    {
        cout<<str1[i]<<" "; // Prints the string character by character
    }

    cout<<endl; // Prints a new line
    cout<<str1<<endl; // Prints the string
    return 0;
}