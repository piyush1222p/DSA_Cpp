#include<iostream>
#include<algorithm>
using namespace std;
void print_array(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void bubble_sort(int array[],int n){
    bool isswap=false;  //to check whether the array is already sorted
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
                isswap=true; //if the array is not sorted then isswap will be true
            }
        }
        if (!isswap)//check whether the array is already sorted
        {
            break;
        }
    }
}
int main(){
    int array[] = {2,5,1,8,6};
    int n = 5;
    bubble_sort(array,n);
    print_array(array,n);
    return 0;
}