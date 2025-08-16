#include <iostream> // Include the iostream library for input and output
#include <map> // Include the map library for using the map container

using namespace std; // Use the standard namespace

void map1(){
    map<string, int> m; // Declare a map with string keys and integer values

    // Insert key-value pairs into the map
    m["abc:"] = 1;
    m["def:"] = 2;
    m["ghi:"] = 3;
    m["jkl:"] = 4;

    // Iterate over the map and print each key-value pair
    for (auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

    // Print the size of the map
    cout << "Size of map: " << m.size() << endl;

    // Access and print the value associated with the key "abc:"
    cout << "Key at the index : " << m.at("abc:") << endl;

    // Erase the key-value pair with the key "abc:"
    m.erase("abc:");

    // Print the size of the map after deletion
    cout << "Size of map after deletion: " << m.size() << endl;

    // Check if the key "abc:" is present in the map
    if (m.find("ghi:") != m.end()) {
        cout << "Key is present "<< m.at("ghi:") << endl;
    } else {
        cout << "Key is not present" << endl;
    }

    // Print the count of the key "def:" (1 if present, 0 if not)
    cout << "The count of abc is: " << m.count("def:") << endl;

    // Insert new key-value pairs into the map
    m.insert({"mno: ", 5});
    m.emplace("pqr: ", 6);

    // Iterate over the map and print each key-value pair
    for (auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }
}
int main() {
    map1();
    
    return 0; // Return 0 to indicate successful execution
}