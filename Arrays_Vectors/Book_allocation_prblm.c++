#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to allocate books such that no student reads more than 'mid' pages
bool isvalid(vector<int> arr, int n, int m, int mid);

// Function to find the minimum number of pages that can be allocated to students
int allocated_books(vector<int> &arr, int n, int m);

int main() {
    vector<int> arr = {2, 1, 3, 4}; // Array of book pages
    int n = 4, m = 2; // n is number of books and m is number of students
    cout << allocated_books(arr, n, m); // Output the result of allocated_books function
    return 0;
}

// Function to check if it is possible to allocate books such that no student reads more than 'mid' pages
bool isvalid(vector<int> arr, int n, int m, int mid) {
    int student = 1; // Start with one student
    int pages = 0; // Pages assigned to the current student
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // If any book has pages greater than mid, return false
        }
        if (pages + arr[i] > mid) {
            student++; // If adding pages exceeds mid, assign the book to a new student
            pages = arr[i]; // Reset pages to the current book's pages
        } else {
            pages += arr[i]; // Otherwise, add pages to the current student
        }
    }
    return student > m ? false : true; // Return true if students required are less than or equal to m
}

// Function to find the minimum number of pages that can be allocated to students
int allocated_books(vector<int> &arr, int n, int m) {
    if (m > n) {
        return -1; // If number of students is greater than number of books, return -1
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate the sum of all pages
    }
    int st = 0; // Start is 0
    int end = sum; // End is the sum of all pages
    int ans = -1; // Initialize answer to -1
    while (end >= st) {
        int mid = st + (end - st) / 2; // Calculate mid
        if (isvalid(arr, n, m, mid)) {
            ans = mid; // If valid, update answer to mid
            end = mid - 1; // Try for a smaller value
        } else {
            st = mid + 1; // If not valid, try for a larger value
        }
    }
    return ans; // Return the minimum number of pages
}