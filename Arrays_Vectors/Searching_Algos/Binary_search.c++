#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binary_search(vector <int>&array,int target,int low,int high);
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector <int> array(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>array[i];
    }
    sort(array.begin(),array.end());
    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    int low=0;
    int high=n-1;
    int result = binary_search(array,target,low,high);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<result<<endl;
    }
    return 0;
}
int binary_search(vector <int>&array,int target,int low,int high){
    while (high>=low)
    {
        int mid=low+(high-low)/2;//To avoid overflow
        if (target>array[mid])
        {
            return binary_search(array,target,mid+1,high);//Recursive call
        }
        else if (target<array[mid])
        {
            return binary_search(array,target,low,mid-1);//Recursive call
        }
        else{
            return mid;
        }
    }
    return -1;
}