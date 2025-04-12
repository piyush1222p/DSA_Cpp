#include <iostream>
using namespace std;

int main() {
    // Declare two string variables
    string str1;
    string str2;

    // Ask the user to enter the first string
    cout << "Enter the first string: ";
    getline(cin, str1); // Read the full line of input into str1

    // Loop through each character in the string
    for (int i = 0; i < str1.length(); i++) {
        cout << str1[i] << " "; // Print each character with a space
    }

    cout << endl; // Print a new line
    cout << str1 << endl; // Print the entire string
    return 0; // End the program
}