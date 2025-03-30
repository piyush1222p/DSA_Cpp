#include <iostream>
#include <cstdlib>
using namespace std;

void reverse_array(int array[],int size);
int main()
{
    //Reverse the Array elements
    int array[6];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number: ";
        cin>>array[i];
    }

    cout<<"\n";

    reverse_array(array,size);

    for (int element: array)    //for each loop to print the array elements
    {
        cout<<element<<" ";
    }
    
    return EXIT_SUCCESS;
}
void reverse_array(int array[],int size)
{
    int start =0;
    int end = size-1;

    while (start<end)   //end and start are the index value which are compare then found whether the array is reversed or not
    {
        swap(array[start],array[end]);  //swap function to swap the elements
        start++;    //increment the start
        end--;  //decrement the end
    }
}