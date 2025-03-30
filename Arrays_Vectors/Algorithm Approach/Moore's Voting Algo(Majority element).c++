#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element using Moore's Voting Algorithm
int Moores_voting_algo(vector<int> &nums);
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> nums[i];
    }

    int result = Moores_voting_algo(nums);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}

int Moores_voting_algo(vector<int> &nums)
{
    int n = nums.size();
    int freq = 1; // Frequency counter
    int ans = nums[0]; // Candidate for majority element

    // Phase 1: Find a candidate for majority element
    for (int i = 1; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
            freq = 1;
        } else if (ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    // Phase 2: Verify the candidate
    freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ans) {
            freq++;
        }
    }

    // If the candidate occurs more than n/2 times, return it
    if (freq > n / 2) {
        return ans;
    } else {
        // No majority element found
        return -1;
    }
}