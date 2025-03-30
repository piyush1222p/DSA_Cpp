//WAF to calculate sum and product of all numbers in an array.
#include <iostream>
using namespace std;

void sum_product(int array[],int size);
int main()
{
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number: ";
        cin>>array[i];
    }

    sum_product(array,size);

    return EXIT_SUCCESS;
}
void sum_product(int array[],int size)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum+=array[i];
        product*=array[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;
    cout<<"The product of the array is: "<<product<<endl;
    cout<<"\n";
}