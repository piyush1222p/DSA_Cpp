#include <iostream> // Include the iostream library for input and output
#include <map> // Include the map library for using the multimap container

using namespace std; // Use the standard namespace

int main() {
    multimap<string, int> m; // Declare a multimap with string keys and integer values

    // Insert key-value pairs into the multimap
    m.emplace("abc:", 1);
    m.emplace("abc:", 2);
    m.emplace("abc:", 3);
    m.emplace("abc:", 4);

    // Iterate over the multimap and print each key-value pair
    for (auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

    // Print the size of the multimap
    cout << "Size of map: " << m.size() << endl;

    // Check if the key "abc:" is present in the multimap
    if (m.find("abc:") != m.end()) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }

    // Erase the first occurrence of the key "abc:"
    m.erase(m.find("abc:"));

    // Print the size of the multimap after deletion
    cout << "Size of map after deletion: " << m.size() << endl;

    return 0; // Return 0 to indicate successful execution
}