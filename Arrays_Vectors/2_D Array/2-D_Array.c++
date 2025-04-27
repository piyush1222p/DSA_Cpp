#include <iostream>
using namespace std;
int main(){
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};// assigning values to 2-D array
    int row=3,coloumn=4;// 3 rows and 4 columns
    cout<<matrix[2][3]<<endl;// index is passed for the 2-D array to access the value
    cout<<matrix[0][0]<<endl;// index is passed for the 2-D array to access the value
    
    cout<<endl;// printing the new line
    cout<<"Printing the 2-D array below"<<endl;// printing the new line

    // taking input from the user for 2-D array

    int matrix2[3][4];// declaring a 2-D array of size 3*4
    cout<<"Enter the elements of 2-D array"<<endl;// printing the new line
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            cin>>matrix2[i][j];// taking input from the user for 2-D array
        }
    }

    cout<<endl;// printing the new line
    
    // printing the 2-D array
    for (int i = 0; i < row; i++)// iterating through the rows
    {
        for (int j = 0; j < coloumn; j++)// iterating through the coloumns
        {
            cout<<matrix2[i][j]<<" ";// printing the value of 2-D array
        }
        cout<<endl;// printing the new line after each row
    }
    
    return EXIT_SUCCESS;
}