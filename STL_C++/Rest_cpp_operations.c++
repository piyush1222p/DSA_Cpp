#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool comparator(int ele1, int ele2){
    if(ele1>ele2)return true;
    else return false;
}
bool pair_comparator(pair<int,int> ele1, pair<int,int> ele2){
    if(ele1.second>ele2.second)return true;
    if(ele1.second<ele2.second)return false;
    if(ele1.first<ele2.first)return true;
    return false;
}
int main(){
    vector<int> v = {1,4,2,6,5,8};
    //return the sum of the input arr
    cout<<accumulate(v.begin(),v.end(),0);

    cout<<endl;
    
    string str = "abc";
    do
    {
        cout<<str<<endl;
        //returns the all possible permutations of the input element
    } while (next_permutation(str.begin(),str.end()));

    cout<<endl;
    do
    {
        cout<<str<<endl;
        //returns all the possible previous permutations of the input element
    } while (prev_permutation(str.begin(),str.end()));
    
    //max element
    auto it = max_element(v.begin(),v.end());
    auto it1 = min_element(v.begin(),v.end());
    cout<<*it<<endl;
    cout<<*it1<<endl;

    //reverse array
    reverse(v.begin(),v.end());
    
    for(auto it:v){
        cout<<it<<" ";
    }

    cout<<endl;
    //power
    int ele = pow(2,4);
    cout<<ele<<endl;
    
    //sort with external comparator
    int arr[] = {5,6,4,7};
    sort(arr,arr+4,comparator);//here it uses the external comparator that checks pass value and return bool function
    for(auto a:arr){
        cout<<a<<" ";
    }

    cout<<endl;

    pair<int,int> num[] = {{1,3},{1,5},{2,6},{2,8},{3,6},{3,9}};
    sort(num,num+7,pair_comparator);//sorting pair wise in elements
    for(int i = 0; i<=6; i++){
        cout<<"{"<<num[i].first<<","<<num[i].second<<"} ";
    }

    return 0;
}