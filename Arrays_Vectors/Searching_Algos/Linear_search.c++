#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector <int>&array,int target);
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
    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    int result = linear_search(array,target);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<result<<endl;
    }
    return 0;
}
int linear_search(vector <int>&array,int target){
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i]==target)
        {
            return i;
        }
    }
    return -1;
}