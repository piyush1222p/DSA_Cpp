#include <iostream>
#include <string.h> //includes this header file for using string properties
using namespace std;
int main(){
    //character arrays are also known as cstring.
    char str[] = {'a','b','c','d','\0'}; //As we know that there must be some ASCII value associated with these characters.
    int arr[] = {1,2,3};

    cout<<arr<<endl;
    cout<<str<<endl; //combine value of the string is returned only when null character is in the array.
    cout<<strlen(str);  //returns the len of the string

    //literal assign to the array
    char str1[] = "hello";
    cout<<str1[2]<<endl;

    //taking user input and displaying it.
    char str2[100];
    char str3[12];
    cout<<"Enter the string value: "<<endl;
    cin.getline(str2,100,'.');  //pass the specified length and a delimeter(stops the value to be print)
    cout<<"output: "<<str2<<endl;

    char str4[100];
    int len=0;
    cout<<"Enter the string value: "<<endl;
    cin.getline(str4,100,'.'); //taking input from the user.

    for (int i = 0; i < str4[i]!='\0'; i++)
    {
        len++;//Counting the length of the string it also counts the space b/w the string and the null character.
    }
    
    cout<<"Length of the string is: "<<len<<endl;
    return 0;
}