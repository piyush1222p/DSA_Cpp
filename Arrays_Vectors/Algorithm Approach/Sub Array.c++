// This program prints all sub-arrays of a given array using nested loops.
#include <iostream>
using namespace std;

int main()
{
    // Initialize an array and its size
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Iterate over all possible starting points of sub-arrays
    for (int st = 0; st < n; st++)
    {
        // Iterate over all possible ending points of sub-arrays
        for (int end = st; end < n; end++)
        {
            // Print elements of the current sub-array
            for (int i = st; i <= end; i++)
            {
                cout << array[i];
            }
            cout << " "; // Separate sub-arrays with a space
        }
        cout << endl; // Move to the next line after printing all sub-arrays starting from 'st'
    }
}