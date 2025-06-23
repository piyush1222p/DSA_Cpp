#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> &arr,int tar,int low,int high);
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int tar=5;
    int low=0,high=arr.size()-1;
    int result = bs(arr,tar,low,high);
    if(!result)cout<<"Element not found.\n";
    else cout<<"Element found at index: "<<result<<"\n";
    return EXIT_SUCCESS;
}
int bs(vector<int> &arr,int tar,int low,int high){
    if(high>=low){
        int mid = low+(high-low)/2;
        if(arr[mid]==tar)return mid;
        else if(arr[mid]>tar)return bs(arr,tar,low,mid-1);
        else return bs(arr,tar,mid+1,high);
    }
    return -1;
}