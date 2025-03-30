#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the first element is the smallest

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};  // Initialize array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    cout << "Original array: ";
    printArray(arr, n);  // Print original array

    selectionSort(arr, n);  // Sort the array

    cout << "Sorted array: ";
    printArray(arr, n);  // Print sorted array

    return 0;
}
/*Time Complexity  = O(n^2)*/