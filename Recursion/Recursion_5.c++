#include <iostream>
#include <vector>
using namespace std;
int issorted(vector<int> &arr,int n){
    if(n==0 || n==1)return true;
    return arr[n-1]>=arr[n-2] && issorted(arr,n-1);//compare the last two elements and call the recursive function for the rest array
    // first to check the last two elements, then the rest of the array
}
int main(){
    vector<int> arr={1, 2, 3, 4, 5};

    int result = issorted(arr, 5);
    if(!result)cout<<"Array is not sorted.\n";
    else cout<<"Array is sorted.\n";
    return EXIT_SUCCESS;
}