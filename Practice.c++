#include <iostream> // Include the input output stream
#include <vector>   // Include the vector library
#include <algorithm>
using namespace std;
vector<int> majority_element_optimal(vector<int> &nums); // Function prototype for the majority_element_optimal function
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);    // Declare a vector nums of size n to store the elements of the array
    cout<<"Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" ";
        cin>>nums[i];   // Input the elements of the array
    }
    sort(nums.begin(),nums.end()); // Sort the array (O(nlogn)) <-- Optimal Approach
    vector<int> result = majority_element_optimal(nums); // Call the function to find the majority element
    if (!result.empty()){
        cout<<"Majority element is "<<result[0]<<endl; // Print the majority element
    }
    else{
        cout<<"No majority element found."<<endl; // Print if no majority element is found
    }
    cout<<endl;
}
vector<int> majority_element_optimal(vector<int> &nums){
    int size = nums.size(); // Store the size of the array
    int freq=1;
    int ans=nums[0];
    for (int i = 1; i < size; i++)
    {
        if (nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq=1;
            ans=nums[i];
        }
        if (freq>size/2)
        {
            return {ans}; // Return the majority element if found
        }
    }
    
    return {};
}