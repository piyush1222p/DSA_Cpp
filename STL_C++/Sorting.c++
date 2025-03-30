#include <iostream> // Include the iostream library for input and output
#include <algorithm> // Include the algorithm library for sorting
#include <vector> // Include the vector library for using the vector container

using namespace std; // Use the standard namespace
bool comparator(pair<int,int> p1,pair<int,int> p2){
    if(p1.second>p2.second)return true;
    else return false;
};
int main() {
    vector<int> v = {7, 9, 8, 2, 3, 4, 7, 6, 2}; // Declare and initialize a vector of integers

    // Sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());

    // Iterate over the sorted vector and print each element
    for (auto ele : v) {
        cout << ele << " ";
    }

    return 0; // Return 0 to indicate successful execution
}