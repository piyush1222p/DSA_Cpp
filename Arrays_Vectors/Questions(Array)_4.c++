//WAF to print intersection of 2 arrays.
#include <iostream>
using namespace std;

void intersection(int array1[],int array2[],int size,int size2);
int main()
{
    int array1[5];
    int array2[5];
    int size = sizeof(array1)/sizeof(array1[0]);
    int size2 = size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number for array1: ";
        cin>>array1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cout<<"Enter the number for array2: ";
        cin>>array2[i];
    }

    cout<<"The intersection of the 2 arrays is: ";

    intersection(array1,array2,size,size2);

    return EXIT_SUCCESS;
}
void intersection(int array1[],int array2[],int size,int size2)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i]==array2[j])
            {
                cout<<array1[i]<<" ";
                break;
            }
        }
    }
    cout<<"\n";
}