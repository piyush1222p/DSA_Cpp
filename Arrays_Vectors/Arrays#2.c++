#include <iostream>
using namespace std;

int main()
{
    int age[10];

    int size = sizeof(age)/sizeof(age[0]);

    //iterartion on the array using for loop

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the age of "<<i+1<<" person: ";
        cin>>age[i];
    }
    

    //line space
    cout<<endl;
    
    //iterartion on the array using for loop

    for (int i = 0; i < size; i++)
    {
        cout<<"The age of "<<i+1<<" person is: ";
        cout<<age[i]<<endl;
    }
    
    return EXIT_SUCCESS;
}