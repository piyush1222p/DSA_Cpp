#include <iostream>
#include <vector>
using namespace std;
int main(){
    int array[] = {-1, -2, -3, 3, 4, -1, 7, -8};
    int size = sizeof(array) / sizeof(array[0]);

    int current_sum =0,max_sum=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        current_sum+=array[i];
        max_sum = max(max_sum,current_sum);
        if (current_sum<0)
        {
            current_sum=0;
        }
        
    }
    cout<<"The Maximum SubArray sum is "<<max_sum<<endl;
}