#include <iostream>
using namespace std;
pair<int,int> linear_search(int arr[][3],int n,int m,int x);
int main(){
    int row=4,cols=3,target;// declaring variables for number of rows, columns and target element
    int arr[4][3];// declaring a 2-D array of size n*m
    cout<<"Enter the elements of the array: "<<endl;// taking input from the user for 2-D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];// taking input from the user for 2-D array
        }
    }
    cout<<"Enter the element to be searched: "<<endl;// taking input from the user for target element
    cin>>target;// taking input from the user for target element
    pair<int,int>result = linear_search(arr,row,cols,target);// calling the function linear_search to search the element in the array
    if ((result.first and result.second) !=-1){
        cout<<"Element found at the index "<<result.first<<","<<result.second<<endl;// if the element is found print the index of the element
    }
    else{
        cout<<"Element not found"<<endl;// if the element is not found print the message
    }
    return 0;// return 0 to indicate successful execution of the program
}
pair<int,int> linear_search(int arr[][3],int rows,int cols,int x){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]==x)//Checking if the element is present in the array or not
            {
                return {i,j};// if the element is found return 1
            }
        }
    }
    return {-1,-1};// if the element is not found return 0
}