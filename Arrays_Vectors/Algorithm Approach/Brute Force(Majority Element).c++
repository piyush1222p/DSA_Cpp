//Majority Element: A majority element in an array is an element that appears more than n/2 times where n is the size of the array.
#include <iostream> // Include the input output stream
#include <vector>   // Include the vector library
using namespace std;
vector<int> majority_element_brute_force(vector<int> &nums);
int main()
{
    int n;  // Declare a variable n to store the size of the array
    cout<<"Enter the size of the array: ";
    cin>>n; // Input the size of the array
    vector<int> nums(n);    // Declare a vector nums of size n to store the elements of the array
    cout<<"Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];   // Input the elements of the array
    }
    vector<int> result = majority_element_brute_force(nums);
    cout<<"The majority elements are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
vector<int> majority_element_brute_force(vector<int> &nums)
{
    int n = nums.size();
    for (int value:nums)    // Iterate through the elements of the array to store the value of the element in the array in the variable value
    {
        int freq=0;
        for (int element:nums)  // Iterate through the elements of the array again to count the frequency of the element in the array and store the value of the element in the variable element
        {
            if (element==value) // Count the frequency of the element if it is found in the array
            {
                freq++; // Increment the frequency of the element if it is found
            }
        }
        if (freq>n/2)   // Check if the element is a majority element
        {
            return {value}; // Return the majority element
        }
    }
    return {};  // Return an empty vector if no majority element is found
}