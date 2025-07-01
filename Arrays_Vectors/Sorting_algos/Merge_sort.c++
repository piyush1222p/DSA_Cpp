#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;

    while (i<=mid && j<=end){//compare elements from both sides and add the smaller one to temp
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){//Add remaining elements from the left half
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){//Add remaining elements from the right half
        temp.push_back(arr[j]);
        j++;
    }
    
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st+idx]=temp[idx]; //Copy the sorted elements back to the original array
    }
    
}
void Merge_sort(vector<int>&arr,int st,int end){
    if(end>st){
        int mid = st+(end-st)/2;
        //Sort the left half
        Merge_sort(arr,st,mid);

        //Sort the right half
        Merge_sort(arr,mid+1,end);

        //Merge the two halves
        merge(arr,st,mid,end);
    }
}
int main(){
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    Merge_sort(arr, 0, arr.size() - 1);

    cout << "Sorted array is: ";
   for(int val:arr){
    cout<<val<<" ";
   }
   cout << endl;
    return 0;
}