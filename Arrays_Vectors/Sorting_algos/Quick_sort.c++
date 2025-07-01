#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>&arr,int st,int end){
    int pivot = arr[end];
    int idx = st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){//if we change the sign to >=, it will sort in descending order
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void Quick_sort(vector<int>&arr,int st,int end){
    if(end>st){
        int piv_idx = partition(arr,st,end);
        
        //recurisve calls for left and right halves
        Quick_sort(arr,st,end-1);//left half
        Quick_sort(arr,piv_idx+1,end);//right half
    }
}
int main(){
    vector<int> arr = {12,31,35,8,32,17};
    Quick_sort(arr,0,arr.size()-1);
    cout << "Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}