#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demonstrating dynamic memory allocation with vectors
    // Vectors in C++ automatically manage memory. When the current capacity is exceeded,
    // the vector allocates more memory, typically doubling the previous capacity.

    vector<string> Name = {"John", "Doe", "Smith", "Doe"};

    // Display the initial size and capacity of the vector
    cout << "Size: " << Name.size() << endl;   // Size of the vector
    cout << "Capacity: " << Name.capacity() << endl;   // Capacity of the vector

    // Add a new element to the vector
    Name.push_back("Piyush");

    // Display the size and capacity of the vector after adding a new element
    cout << "Size after push back: " << Name.size() << endl;   // Size of the vector after pushing an element
    cout << "Capacity after push back: " << Name.capacity() << endl;  // Capacity after pushing back

    return EXIT_SUCCESS;
}