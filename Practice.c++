#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pair_sum_sorted(vector<int> array,int target); // Function prototype
int main(){
    vector<int> array;
    int n, num;
    cout << "Enter the number of elements you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> num;
        array.push_back(num);
    }
    sort(array.begin(), array.end()); // Ensure the array is sorted
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    vector<int> result=pair_sum_sorted(array,target);  // Call the function;
    if (!result.empty()){
        cout<<"The pair is: " << result[0] << " , " << result[1] << endl; // Print the pair
    }
    else{
        cout << "No pair found." << endl;   // Print if no pair is found
    }
    return EXIT_SUCCESS;
}
vector<int> pair_sum_sorted(vector<int> array,int target){
    vector<int> result;
    int left = 0;
    int right = array.size()-1;
    while (left<right)
    {
        int pairsum = array[left]+array[right];
        if (pairsum==target)
        {
            result.push_back(array[left]);
            result.push_back(array[right]); // Store the pair
            return result;
        }
        else if (pairsum<target)
        {
            left++; // Move the left pointer
        }
        else{
            right--;
        }
    }
    return result;
}