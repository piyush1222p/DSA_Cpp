#include <iostream>
#include <algorithm>
using namespace std;

// Function to print the elements of an array
void printArray(int arr[], int n);

// Function to perform insertion sort on an array
void insertion_sort(int arr[], int n);

int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Initialize array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    cout << "Original array: ";
    printArray(arr, n); // Print the original array

    cout << "\n";
    insertion_sort(arr, n); // Sort the array using insertion sort

    cout << "Sorted array: ";
    printArray(arr, n); // Print the sorted array

    return 0;
}

// Function to print the elements of an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Function to perform insertion sort on an array
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current_element = arr[i]; // Store the current element
        int prev = i - 1; // Initialize the previous index
        // Shift elements of arr[0..i-1], that are greater than current_element, to one position ahead of their current position
        while (prev >= 0 and arr[prev] > current_element) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current_element; // Place the current element at its correct position
    }
}
/*Time complexity = O(nlogn)*/