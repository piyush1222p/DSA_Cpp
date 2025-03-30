#include <iostream>
using namespace std;
/*Brute force approach: The brute force approach refers to a straightforward method of solving a problem
                        by trying all possible solutions and selecting the best one*/
int main()
{
    // Initialize the array and its size
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Initialize the maximum sum to the smallest possible integer value
    int max_sum = INT_MIN;

    // Iterate over each possible starting point of the sub-array
    for (int st = 0; st < n; st++)
    {
        // Initialize the current sum to 0 for each new starting point
        int current_sum = 0;

        // Iterate over each possible ending point of the sub-array
        for (int end = st; end < n; end++)
        {
            // Add the current element to the current sum
            current_sum += array[end];

            // Update the maximum sum if the current sum is greater
            max_sum = max(max_sum, current_sum);
        }
    }

    // Print the maximum sub-array sum
    cout << "The Maximum SubArray sum is " << max_sum << endl;

    return EXIT_SUCCESS;
}