// This program implements Kadane's Algorithm to find the maximum sum of a contiguous subarray
// within a one-dimensional numeric array.

#include <iostream>
using namespace std;

int main()
{
    // Initialize the array with given values
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(array) / sizeof(array[0]);

    // Initialize variables to store the current sum and the maximum sum
    int current_sum = 0,max_sum = INT_MIN;

    // Iterate through the array
    for (int i = 0; i < size; i++)
    {
        // Add the current element to the current sum
        current_sum += array[i];

        // Update the maximum sum if the current sum is greater
        max_sum = max(max_sum, current_sum);

        // If the current sum becomes negative, reset it to zero
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    // Output the maximum subarray sum
    cout << "The Maximum SubArray sum is " << max_sum << endl;
}

//At conclusion the Kadane's Algorithm is a very efficient way to find the maximum sum of a contiguous subarray within a one-dimensional numeric array.