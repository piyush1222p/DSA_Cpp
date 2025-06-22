#include <iostream>
using namespace std;
int recursive_sum(int n){
    if (n==0)return 0;
    else if (n==1)return 1;
    else return n+recursive_sum(n-1);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0)cout<<"Sum is 0.\n";
    else if(num<0)cout<<"Please enter a +ve integer.\n";
    else cout<<"Sum of numbers from 1 to "<<num<<" is "<<recursive_sum(num)<<"\n";
    return 0;
}