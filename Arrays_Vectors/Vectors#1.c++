#include <iostream>
#include <vector>   // Required for vector header file in C++

using namespace std;

int main()
{
    vector<int> Age;    // Declaring a vector of integers
    vector<int> Age_2(5,0);    // Declaring a vector of integers with 5 elements and all elements are initialized to 0
    vector<int> Age1 = {1,2,3,4,5};    // Declaring a vector of integers with 5 elements and all elements are initialized to 1,2,3,4,5

    /*Vectors are dynamic in nature*/

    cout<<Age_2[0]<<endl; // Segmentation fault if the index is out of range
    cout<<Age_2[1]<<endl;
    cout<<Age_2[2]<<endl;
    cout<<Age_2[3]<<endl;
    cout<<Age_2[4]<<endl;

    return EXIT_SUCCESS;
}