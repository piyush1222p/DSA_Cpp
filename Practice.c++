#include <iostream>
#include <vector>
using namespace std;
int paint_partition(vector<int> &arr, int n, int m);
bool isvalid(vector<int> &arr,int n,int m,int mid);
int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << paint_partition(arr, n, m);
    return 0;
}
int paint_partition(vector<int> &arr, int n, int m){
    int sum=0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int st=0,end=sum,ans=-1;
    while (end>=st){
        int mid = st+(end-st)/2;
        if (isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
bool isvalid(vector<int> &arr, int n, int m, int mid){
    int painter=1;
    int time=0;
    for (int i = 0; i < n; i++){
        if (arr[i]>mid){
            return false;
        }
        else if (arr[i]+time>mid){
            painter++;
            time=arr[i];
        }
        else{
            time+=arr[i];
        }
    }
    return painter<=m;
}