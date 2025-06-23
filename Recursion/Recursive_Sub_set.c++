#include<iostream>
#include<vector>
using namespace std;
void sub_set(vector<int> &arr,vector <int> &ans, int i){
    if(i==arr.size()){
        for(int val :ans){//Print the current subsets
            cout<<val<<" ";
        }
        cout<<"\n";
        return;
    }
    //include
    ans.push_back(arr[i]);
    sub_set(arr,ans,i+1); // Include the current element
    //exclude
    ans.pop_back(); // Backtrack
    sub_set(arr,ans,i+1);
}
int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // This will store the current subset
    sub_set(arr,ans,0);
    return EXIT_SUCCESS;
}