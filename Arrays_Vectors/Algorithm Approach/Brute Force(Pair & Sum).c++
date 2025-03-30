// This program finds a pair of indices in an array whose elements sum up to a target value.

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// Function declaration for pair_sum
vector<int> pair_sum(vector<int> array, int target);

int main() {
    vector<int> array; // Vector to store the array elements
    int target, num, size;

    // Prompt user to enter the target element
    cout << "Enter the target Element: ";
    cin >> target;

    // Prompt user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input array elements from the user
    for (int i = 0; i < size; i++) {
        cout << "Enter the number: ";
        cin >> num;
        array.push_back(num);
    }

    // Call the pair_sum function to find the pair of indices
    vector<int> result = pair_sum(array, target);

    // Print the result
    cout << "The pair is: " << result[0] << " " << result[1] << endl;   // Print the pair of indices

    return EXIT_SUCCESS;
}

// Function to find a pair of indices whose elements sum up to the target value
vector<int> pair_sum(vector<int> array, int target) {
    vector<int> result;

    // Iterate through the array to find the pair
    for (int i = 0; i < array.size(); i++) {
        for (int j = i + 1; j < array.size(); j++) {
            if (array[i] + array[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    // Return an empty vector if no pair is found
    return result;
}