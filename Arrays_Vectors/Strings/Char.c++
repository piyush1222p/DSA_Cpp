#include <iostream>
#include <string.h> // For string manipulation functions
using namespace std;

int main() {
    // Example of a character array (C-string)
    char str[] = {'a', 'b', 'c', 'd', '\0'}; // Null character marks the end of the string
    int arr[] = {1, 2, 3}; // Example of an integer array

    // Printing the integer array and character array
    cout << arr << endl; // Prints the memory address of the integer array
    cout << str << endl; // Prints the string (up to the null character)
    cout << strlen(str); // Prints the length of the string (excluding the null character)

    // Assigning a string literal to a character array
    char str1[] = "hello";
    cout << str1[2] << endl; // Accessing and printing the third character of the string

    // Taking user input and displaying it
    char str2[100]; // Array to store user input
    char str3[12];  // Another array (not used in this example)
    cout << "Enter the string value: " << endl;
    cin.getline(str2, 100, '.'); // Reads input until the delimiter '.' or max length
    cout << "output: " << str2 << endl; // Prints the user input

    // Calculating the length of a user-input string manually
    char str4[100]; // Array to store user input
    int len = 0;    // Variable to store the length of the string
    cout << "Enter the string value: " << endl;
    cin.getline(str4, 100, '.'); // Reads input until the delimiter '.' or max length

    // Loop to count the length of the string (including spaces)
    for (int i = 0; str4[i] != '\0'; i++) {
        len++; // Increment length for each character
    }

    // Printing the calculated length of the string
    cout << "Length of the string is: " << len << endl;

    return 0;
}