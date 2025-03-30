//Majority Element: A majority element in an array is an element that appears more than n/2 times where n is the size of the array.
#include <iostream> // Include the input output stream
#include <vector>   // Include the vector library
#include <algorithm>    // sort() function is included in this library
using namespace std;
vector<int> majority_element_optimal(vector<int> &nums);
int main() {
    int n;
    cout << "Enter the number of elements you want to enter: ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end()); // Sort the array (O(nlogn)) <-- Optimal Approach
    vector<int> result = majority_element_optimal(nums);    // Call the function to find the majority element
    if (!result.empty()) {  // Check if the result is not empty
        cout<<"\n";
        cout << "Majority element: " << result[0] << endl;  // Print the majority element
    } else {
        cout << "No majority element found." << endl;   // Print if no majority element is found
    }
    return 0;
}
vector<int> majority_element_optimal(vector<int> &nums) {
    int n = nums.size();    // Store the size of the array
    int freq = 1;   // Initialize the frequency of the element to 1
    int ans = nums[0];    // Initialize the ans element to the first element of the array (sorted)
    for (int i = 1; i < n; i++) {   // Iterate through the array
        if (nums[i] == nums[i - 1]) {   // Check if the current element is equal to the previous element
            freq++; // Increment the frequency
        } else {    // If the current element is not equal to the previous element
            freq = 1;   // Reset the frequency to 1
            ans = nums[i];  // Update the ans element to the current element (as it is the majority element candidate)
        }

        // check if the frequency is greater than n/2
        if (freq > n / 2) { // Check if the frequency of the element is greater than n/2
            return {ans};   // Return the majority element
        }
    }
    return {};  // Return an empty vector if no majority element is found
}