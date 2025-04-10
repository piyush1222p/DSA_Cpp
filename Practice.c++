#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> arr(size);
    vector<int> arr1(size);
    //taking input
    for(int i=0;i<size;i++){
        cout<<"Enter the number: ";
        cin>>arr[i];
    }
    //sqr of each element
    for (int i = 0; i < size; i++)
    {
        arr1[i]=arr[i]*arr[i];
    }
    //printing the sqr of each element
    cout<<"The square of each element is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return EXIT_SUCCESS;
}