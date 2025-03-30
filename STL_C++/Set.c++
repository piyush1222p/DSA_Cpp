#include <iostream> // Include the iostream library for input and output
#include <set> // Include the set library for using the set container

using namespace std; // Use the standard namespace

int main() {
    set<int> s; // Declare a set of integers

    // Insert elements into the set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3); // Duplicate element, will not be added

    // Iterate over the set and print each element
    for (auto ele : s) {
        cout << ele << endl;
    }

    // Print the size of the set
    cout << "Size of set: " << s.size() << endl;

    // Print the count of the element '3' (1 if present, 0 if not)
    cout << "Count of 3: " << s.count(3) << endl;

    // Check if the element '3' is present in the set
    if (s.find(3) != s.end()) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    // Erase the element '3' from the set
    s.erase(3);

    // Print the size of the set after deletion
    cout << "Size of set after deletion: " << s.size() << endl;

    // Print the upper bound of the element '2'
    cout << "Upper bound of 2: " << *s.upper_bound(2) << endl;

    // Print the lower bound of the element '2'
    cout << "Lower bound of 2: " << *s.lower_bound(2) << endl;

    return 0; // Return 0 to indicate successful execution
}

/*U can create and follow operation on multi and unordered set where they'll perform the same operation and output*/