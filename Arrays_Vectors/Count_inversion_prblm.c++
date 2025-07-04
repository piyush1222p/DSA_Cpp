#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&arr,int st,int end,int mid){
    vector<int>temp;
    int i=st,j=mid+1;
    int count_inversion = 0;//keep the count of inversions
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            count_inversion+=(mid-i+1);//count inversions
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[st+i]=temp[i];
    }
    return count_inversion;
}
int Merge_sort(vector<int>&arr,int st,int end){
    int InvCount = 0; // Initialize inversion count
    if(end>st){
        int mid = st+(end-st)/2;
        
        InvCount += Merge_sort(arr,st,mid);//left inversion count
        
        InvCount += Merge_sort(arr,mid+1,end);//right inversion count
        
        InvCount += merge(arr,st,end,mid);//count cross inversions
        
        return InvCount; // Return total inversion count
    }
    return 0; // Return 0 if no inversions found
}
int main(){
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    int ans = Merge_sort(arr, 0, arr.size() - 1);
    cout << "Number of inversions: " << ans << endl;
    return 0;
}
/*Time Complexity = O(nlog n)*/