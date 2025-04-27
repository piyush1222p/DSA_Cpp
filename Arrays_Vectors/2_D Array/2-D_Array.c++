#include <iostream>
using namespace std;
int main(){
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};// assigning values to 2-D array
    int i=3,j=4;// 3 rows and 4 columns
    cout<<matrix[2][3]<<endl;// index is passed for the 2-D array
    return EXIT_SUCCESS;
}