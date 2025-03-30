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

    cout<<"Enter the string value: "<<endl;
    cin.getline(str3,12);
    for (char ele:str3)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}