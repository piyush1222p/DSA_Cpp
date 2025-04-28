#include <iostream>
using namespace std;
int diagonal_sum(int arr[][3],int row,int cols);
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};// declaring a 2-D array of size 3*3
    int row=3,cols=3;// declaring variables for number of rows and columns
    cout<<"The sum of the diagonal is: "<<diagonal_sum(arr,row,cols)<<endl;// calling the function diagonal_sum to find the sum of the diagonal
    return 0;// return 0 to indicate successful execution of the program
}
int diagonal_sum(int arr[][3],int row,int cols){
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i==j)
            {
                sum+=arr[i][j];// calculating the sum of the diagonal elements
            }
            else if (j==row-i-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}