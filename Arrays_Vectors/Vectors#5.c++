#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Iterators in vector
    vector<int> Age = {20, 15, 14, 16, 17, 18, 19};
    vector<int>::iterator it;

    // Forward iteration
    cout << "Forward iteration: ";
    for (it = Age.begin(); it != Age.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert Function in vector
    Age.insert(Age.begin() + 2, 22);  // Inserts 22 at index 2

    // Forward iteration after insertion
    cout << "Forward iteration after insertion: ";
    for (it = Age.begin(); it != Age.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Backward iteration
    cout << "Backward iteration: ";
    for (it = Age.end() - 1; it >= Age.begin(); it--) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iteration using reverse iterator
    vector<int>::reverse_iterator rit;
    
    cout << "Reverse iteration: ";
    for (rit = Age.rbegin(); rit != Age.rend(); ++rit) {//Instead of vector<int>::reverse_iterator rit, we can use auto rit
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}