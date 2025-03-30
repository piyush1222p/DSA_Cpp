#include <iostream>
#include <vector>
using namespace std;

//Wap to reverse the elements of a vector...

void Reverse(vector<int> &Age);

int main()
{
    // Initialize a vector with values
    vector<int> Age;
    int n,num;

    // Taking user input in a vector
    // Prompt the user to enter the number of elements they want to input
    cout << "Enter the number of elements you want to enter: ";
    cin >> n;

    // Loop to take 'n' elements as input from the user
    for (int i = 0; i < n; i++)
    {
        // Prompt the user to enter each element
        cout << "Enter the element: ";
        cin >> num;
        
        // Add the input element to the vector 'Age'
        Age.push_back(num);
    }
    
    // Print the size of the vector
    cout << "Size: " << Age.size() << endl;

    // Print a message indicating the reversal of vector elements
    cout << "Reverse of the vector elements: \n";

    // Call the Reverse function to reverse the vector elements
    Reverse(Age);

    return 0;
}

void Reverse(vector<int> &Age)
{
    // Loop to swap elements from the start and end moving towards the center
    for (int i = 0; i < Age.size() / 2; i++)
    {
        swap(Age[i], Age[Age.size() - i - 1]);  // Swap function is used to swap the elements of the vector
    }

    // Loop to print the reversed vector elements
    for (int i = 0; i < Age.size(); i++)
    {
        cout << Age[i] << " ";
    }
    cout << endl;
}