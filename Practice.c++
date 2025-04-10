#include <iostream>
#include <vector>
using namespace std;
bool is_prime(int size); // Function prototype to check if a number is prime
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> array(size);
    for (int i = 0; i < size; i++){
        cout<<"Enter the element: ";
        cin>>array[i];
    }
    //find prime numbers in the array
    cout<<"The prime numbers in the array are: ";
    for (int i = 0; i < size; i++)
    {
        if (is_prime(array[i]))
        {
            cout<<array[i]<<" ";
        }
    }
    return EXIT_SUCCESS;
}
bool is_prime(int size){
    if (size<=1){
        return false;
    }
    else if (size==2){
        return true;
    }
    else{
        for (int i = 2; i < size; i++){
            if (size%i==0){
                return false;
            }
        }
        return true;
    }
}