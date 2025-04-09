#include <iostream> // Include the input output stream
#include <vector>   // Include the vector library
using namespace std;
vector<int> majority_element_brute_force(vector<int> &nums); // Function prototype for the majority_element_brute_force function
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
    vector<int> result = majority_element_brute_force(nums); // Call the function to find the majority element
    cout<<"The elements of the array are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" "; // Print the elements of the array
    }
    cout<<endl;
}
vector<int> majority_element_brute_force(vector<int> &nums){
    int n = nums.size();
    for (int ele:nums)
    {
        int freq=0;
        for (int element:nums)
        {
            if (element==ele)
            {
                freq++;
            }
        }
        if (freq>n/2)
        {
            return {ele}; // Return the majority element
        }
    }
    return {};
}