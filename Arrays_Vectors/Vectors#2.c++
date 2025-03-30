#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demonstrating for-each loop with vector in C++
    vector<int> Age = {20, 15, 14, 16, 17, 18, 19};

    // Using a for-each loop to iterate over the elements of the vector
    for (int val : Age)   // For-each loop in Vector C++
    {
        cout << val << endl;    // Prints all the elements of the vector
    }
    
    return EXIT_SUCCESS;
}