#include <iostream>
using namespace std;

void min_max(int array[],int size);
int main()
{
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number: ";
        cin>>array[i];
    }

    min_max(array,size);

    return EXIT_SUCCESS;
}
void min_max(int array[],int size)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    
    cout<<"\n";
    cout<<"The maximum number is: "<<max<<endl;
    cout<<"The minimum number is: "<<min<<endl;
}