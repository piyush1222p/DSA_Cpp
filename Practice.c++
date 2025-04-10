#include<iostream>
#include<vector>
using namespace std;
int moore_voting_algo(vector<int> &nums);
int main(){
    int size;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>size; // Input the size of the array
    vector<int> nums(size); // Create a vector of the given size
    for (int i = 0; i < size; i++){
        cout<<"Enter the number: ";
        cin>>nums[i]; // Input the elements of the array
    }
    int result = moore_voting_algo(nums); // Call the function to find the majority element
    if (result != -1){
        cout<<"The majority element is: "<<result<<endl; // Print the majority element
    }
    else{
        cout<<"No majority element found."<<endl; // Print if no majority element is found
    }
    return EXIT_SUCCESS; // Return success
}
int moore_voting_algo(vector<int> &nums){
    int size = nums.size(); // Get the size of the array
    int freq = 1; // Initialize frequency counter
    int ans = nums[0]; // Initialize the candidate for majority element

    // Phase 1: Find a candidate for majority element
    for (int i = 0; i < size; i++){
        if (freq==0){
            ans = nums[i];
            freq = 1;
        }
        else if (ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    // Phase 2: Verify the candidate
    for (int i = 0; i < size; i++){
        if (nums[i]==ans){
            freq++;
        }
    }

    // If the candidate occurs more than n/2 times, return it
    if (freq>size/2){
        return ans;
    }
    else{
        return -1;
    }
}