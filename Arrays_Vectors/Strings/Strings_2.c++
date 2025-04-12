#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;

    for (int i = 0; i < str1.length(); i++)
    {
        cout<<"Enter the first string: ";
        getline(cin,str1); // Using getline to read the entire line including spaces
    }

    for (int i = 0; i < str1.length(); i++)
    {
        cout<<str1[i]<<" "; // Prints the string character by character
    }
    return 0;
}