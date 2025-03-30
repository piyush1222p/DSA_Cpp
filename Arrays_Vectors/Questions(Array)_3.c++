//WAF to print all the unique values in an array.
#include <iostream>
using namespace std;

void unique_values(int array[],int size);
int main()
{
    int array[10];  //array to store the input
    int size = sizeof(array)/sizeof(array[0]);  //size of the array

    for (int i = 0; i < size; i++)  //taking input from the user
    {
        cout<<"Enter the number: ";
        cin>>array[i];  //storing the input in the array
    }

    cout<<"The unique values in the array are: \n";
    unique_values(array,size);  //calling the function to print the unique values

    return EXIT_SUCCESS;
}
void unique_values(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        bool is_unique = true;  //flag to check if the element is unique
        for (int j = 0; j < size; j++)
        {
            /*The nested loop checks whether the each array element is unique by comaring it with further next elements*/
            if (array[i]==array[j] && i!=j)
            {
                is_unique = false;  //if the element is not unique
                break;
            }
        }
        if (is_unique)  //if the element is unique
        {
            cout<<array[i]<<" ";
        }
    }
}