#include <iostream>
using namespace std;
int max_cols_sum(int arr[][3],int row,int cols);
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};// declaring a 2-D array of size 3*3
    int row=3,cols=3;// declaring variables for number of rows and columns
    cout<<"The maximum sum of the column is: "<<max_cols_sum(arr,row,cols)<<endl;// calling the function max_cols_sum to find the maximum sum of the column
    return 0;// return 0 to indicate successful execution of the program
}
int max_cols_sum(int arr[][3],int row,int cols){
    int max_sum=INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int sum_I=0;
        for (int j = 0; j < row; j++)
        {
            sum_I+=arr[j][i];// calculating the sum of each column
        }
        max_sum=max(max_sum,sum_I);// checking if the sum of the column is greater than the max sum
    }
    return max_sum;// returning the maximum sum of the column
}