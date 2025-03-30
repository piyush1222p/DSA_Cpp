#include <iostream>
using namespace std;

void swap_min_max(int array[],int size);
int main()
{
    int array[6];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number: ";
        cin>>array[i];
    }

    swap_min_max(array,size);

    cout<<"The array after swapping the min and max values is: ";

    for (int element : array)
    {
        cout<<element<<" ";
    }

    return EXIT_SUCCESS;
}
void swap_min_max(int array[],int size)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i]<min)
        {
            min = array[i];
        }
        if (array[i]>max)
        {
            max=array[i];
        }
    }

    //swaping the min and max values

    for (int i = 0; i < size; i++)
    {
        if (array[i]==max)
        {
            array[i] = min;
        }
        else if (array[i]==min)
        {
            array[i] = max;
        }
    }
}