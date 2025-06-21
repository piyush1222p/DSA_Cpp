#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function declarations
bool ispossible(vector<int> &arr, int n, int m, int mid);
int cowshed(vector<int> &arr, int n, int m);

int main() {
    vector<int> arr = {1, 2, 8, 4, 9}; // Stall positions
    int n = 5, m = 3; // Number of stalls and cows
    cout << cowshed(arr, n, m); // Find and print the largest minimum distance
    return 0;
}

// Function to check if it is possible to place cows with at least 'mid' distance apart
bool ispossible(vector<int> &arr, int n, int m, int mid) {
    int cows = 1; // Place the first cow in the first stall
    int pos = arr[0]; // Position of the last placed cow
    for (int i = 1; i < n; i++) {
        if (arr[i] - pos >= mid) { // Check if the current stall is at least 'mid' distance from the last placed cow
            cows++; // Place another cow
            pos = arr[i]; // Update the position of the last placed cow
        }
        if (cows == m) { // If all cows are placed
            return true;
        }
    }
    return false; // Not possible to place all cows with at least 'mid' distance apart
}

// Function to find the largest minimum distance between cows placed in stalls
int cowshed(vector<int> &arr, int n, int m) {
    sort(arr.begin(), arr.end()); // Sort the stall positions
    int st = 0, end = arr[n-1] - arr[0], ans = -1; // Initialize binary search range
    while (end >= st) {
        int mid = st + (end - st) / 2; // Calculate mid point
        if (ispossible(arr, n, m, mid)) { // Check if it is possible to place cows with 'mid' distance apart
            ans = mid; // Update answer
            st = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return ans; // Return the largest minimum distance
}