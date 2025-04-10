#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pair_sum_sorted(vector<int> array,int target);
int main(){
    vector<int> array;
    int num,size,target;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"Enter the number: ";
        cin>>num;
        array.push_back(num);
    }
    sort(array.begin(),array.end());
    cout<<"Enter the target element: ";
    cin>>target;
    vector<int> result = pair_sum_sorted(array,target);
    if (!result.empty()){
        cout<<"The pair is: "<<result[0]<<" , "<<result[1]<<endl;
    }
    else{
        cout<<"No pair found."<<endl;
    }
    return EXIT_SUCCESS;
}
vector<int> pair_sum_sorted(vector<int> array,int target){
    vector<int> result;
    int left = 0;
    int right = array.size()-1;
    while (left<right){
        int pairsum = array[left]+array[right];
        if (pairsum==target){
            result.push_back(array[left]);
            result.push_back(array[right]);
            return result;
        }
        else if (pairsum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return result;
}