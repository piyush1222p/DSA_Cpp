#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Pair in C++ STL
    pair<int, int> p1 = {1, 2};  // Creating a pair of integers
    pair<double, double> p3 = make_pair(2.34,2.45);

    // Accessing the pair values
    cout << "First value: " << p1.first << endl;  // Accessing the first value of the pair
    cout << "Second value: " << p1.second << endl;  // Accessing the second value of the pair

    cout<<p3.first<<" "<<p3.second<<endl;

    // Pair of pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};  // Creating a pair where the second element is another pair

    // Accessing the pair values
    cout << "First value: " << p2.first << endl;  // Accessing the first value of the outer pair
    cout << "Second value: " << p2.second.first << endl;  // Accessing the first value of the inner pair
    cout << "Third value: " << p2.second.second << endl;  // Accessing the second value of the inner pair

    // Creating vector of pairs
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};  // Initializing a vector of pairs

    v.push_back({7, 8});  // Adding a new pair to the vector using push_back (where the pair is created using {})
    v.emplace_back(9, 10);  // Adding a new pair to the vector using emplace_back (where the pair is assumed to be created using {} and the values are passed as arguments)

    // Iterating over the vector of pairs
    for (auto ele : v) {
        cout << ele.first << " " << ele.second << endl;  // Accessing and printing the elements of each pair
    }

    return 0;
}