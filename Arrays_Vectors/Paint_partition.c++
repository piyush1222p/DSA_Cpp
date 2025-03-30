#include <iostream>
#include <vector>
using namespace std;

// Function declarations
int paint_partition(vector<int> &arr, int n, int m);
bool isvalid(vector<int> &arr, int n, int m, int mid);

int main() {
    vector<int> arr = {40, 30, 10, 20}; // Array of painting times
    int n = 4, m = 2; // Number of boards and painters
    cout << paint_partition(arr, n, m); // Find and print the minimum time to paint all boards
    return 0;
}

// Function to check if it is possible to paint all boards with 'm' painters in 'mid' time
bool isvalid(vector<int> &arr, int n, int m, int mid) {
    int painter = 1; // Start with the first painter
    int time = 0; // Time taken by the current painter
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) { // If a single board takes more time than 'mid', it's not possible
            return false;
        }
        if (time + arr[i] > mid) { // If adding the current board exceeds 'mid' time
            painter++; // Use a new painter
            time = arr[i]; // Start the new painter's time with the current board
        } else {
            time += arr[i]; // Add the current board's time to the current painter's time
        }
    }
    return painter <= m; // Return true if the number of painters used is less than or equal to 'm'
}

// Function to find the minimum time to paint all boards with 'm' painters
int paint_partition(vector<int> &arr, int n, int m) {
    int sum = 0, max_element = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate the total time to paint all boards
        max_element = max(max_element, arr[i]); // Find the maximum board length
    }
    int st = max_element, end = sum, ans = -1; // Initialize binary search range
    while (end >= st) {
        int mid = st + (end - st) / 2; // Calculate mid point
        if (isvalid(arr, n, m, mid)) { // Check if it is possible to paint all boards in 'mid' time
            ans = mid; // Update answer
            end = mid - 1; // Search in the left half
        } else {
            st = mid + 1; // Search in the right half
        }
    }
    return ans; // Return the minimum time to paint all boards
}