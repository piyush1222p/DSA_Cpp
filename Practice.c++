#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool ispossible(vector<int> &arr,int m,int n ,int mid){
    int cows=1;
    int pos=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]-pos>=mid)
        {
            cows++;
            pos=arr[i];
        }
        if (cows==m)
        {
            return true;
        }
    }
    return false;
}
int cowshed(vector<int> &arr,int m,int n){
    int st=0,end=arr[n-1]-arr[0],ans=-1;
    sort(arr.begin(),arr.end());
    while(end>=st){
        int mid=st+(end-st)/2;
        if(ispossible(arr,m,n,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5,m=3;
    cout<<cowshed(arr,m,n); // Find and print the largest minimum distance
    return 0;
}