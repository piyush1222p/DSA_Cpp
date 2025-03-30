#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demonstrating various functions available in the vector container in C++
    vector<int> Age = {20, 15, 14, 16, 17, 18, 19};
    vector<string> Name;

    // Size Function in vector C++
    cout << "Initial Size of Age vector: " << Age.size() << endl;   // Size of the Age vector
    cout << "Initial Size of Name vector: " << Name.size() << endl; // Size of the Name vector

    // Push_back Function in vector C++
    Age.push_back(25);  // Adds an element at the end of the Age vector
    Age.push_back(35);
    Age.push_back(45);
    Age.push_back(55);

    Name.push_back("John"); // Adds an element at the end of the Name vector
    cout << "Size of Age vector after push_back: " << Age.size() << endl;   // Size of the Age vector after pushing elements

    // Emplace_back Function in vector C++
    Age.emplace_back(65);  // Constructs and adds an element at the end of the Age vector
    Age.emplace_back(75);
    Name.emplace_back("Doe"); // Constructs and adds an element at the end of the Name vector
    cout << "Size of Age vector after emplace_back: " << Age.size() << endl;   // Size of the Age vector after emplacing elements

    // Pop_back Function in vector C++
    Age.pop_back();   // Removes the last element of the Age vector
    Age.pop_back();
    Age.pop_back();
    Age.pop_back();
    cout << "Size of Age vector after pop_back: " << Age.size() << endl;   // Size of the Age vector after popping elements

    Name.pop_back();
    cout << "Size: " << Name.size() << endl;

    for (int val : Age)   // For-each loop in Vector C++
    {
        cout << val << endl;    // Prints all the elements of the vector
    }

    // Front Function in vector C++
    cout << "Front Element: " << Age.front() << endl;   // Prints the first element of the vector

    // Back Function in vector C++
    cout << "Back Element: " << Age.back() << endl;    // Prints the last element of the vector

    // at Function in vector C++
    cout << "Element at index 0: " << Age.at(0) << endl;    // Prints the element at particular index
    cout << "Element at index 1: " << Age.at(1) << endl;
    cout << "Element at index 2: " << Age.at(2) << endl;
    cout << "Element at index 3: " << Age.at(3) << endl;

    // Erase Function in vector C++
    Age.erase(Age.begin() + 2);  // Removes the element at index 2
    cout << "Size of Age vector after erase: " << Age.size() << endl;   // Size of the Age vector after erasing an element

    for (int val : Age)   // For-each loop in Vector C++
    {
        cout << val << endl;    // Prints all the elements of the vector
    }

    // Insert Function in vector C++
    Age.insert(Age.begin() + 2, 30);  // Inserts an element at index 2
    cout << "Size of Age vector after insert: " << Age.size() << endl;   // Size of the Age vector after inserting an element

    for (int val : Age)   // For-each loop in Vector C++
    {
        cout << val << endl;    // Prints all the elements of the vector
    }

    // Clear Function in vector C++
    Age.clear();  // Removes all elements from the Age vector
    cout << "Size of Age vector after clear: " << Age.size() << endl;   // Size of the Age vector after clearing all elements
    cout << "Capacity of Age vector after clear: " << Age.capacity() << endl; // Capacity of the Age vector after clearing all elements

    // Empty Function in vector C++
    if (Age.empty()) {  // Checks if the Age vector is empty
        cout << "Age vector is empty." << endl;   // Prints if the Age vector is empty
    } else {
        cout << "Age vector is not empty." << endl;   // Prints if the Age vector is not empty
    }

    return EXIT_SUCCESS;
}