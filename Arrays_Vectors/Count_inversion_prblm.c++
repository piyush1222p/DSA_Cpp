#include<iostream>
#include<vector>
using namespace std;

// Merge two sorted subarrays and count inversions
int merge(vector<int>& arr, int st, int end, int mid) {
    vector<int> temp; // Temporary array to store merged result
    int i = st, j = mid + 1;
    int count_inversion = 0; // Count of inversions

    // Merge the two subarrays while counting inversions
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            count_inversion += (mid - i + 1); // All remaining elements in left subarray are greater
        }
    }

    // Copy any remaining elements from the left subarray
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from the right subarray
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the merged elements back to the original array
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
    return count_inversion; // Return the number of inversions found in this merge
}

// Recursive merge sort function that returns inversion count
int Merge_sort(vector<int>& arr, int st, int end) {
    int InvCount = 0; // Initialize inversion count
    if (end > st) {
        int mid = st + (end - st) / 2;

        // Count inversions in the left half
        InvCount += Merge_sort(arr, st, mid);

        // Count inversions in the right half
        InvCount += Merge_sort(arr, mid + 1, end);

        // Count cross inversions while merging
        InvCount += merge(arr, st, end, mid);

        return InvCount; // Return total inversion count for this segment
    }
    return 0; // No inversions if the segment has one or zero elements
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7}; // Input array

    int ans = Merge_sort(arr, 0, arr.size() - 1); // Get inversion count
    cout << "Number of inversions: " << ans << endl; // Output the result
    return 0;
}
/* Time Complexity = O(n logn)
   Space Complexity = O(n) for the temporary array used in merging
   The algorithm efficiently counts inversions while sorting the array using merge sort.
*/