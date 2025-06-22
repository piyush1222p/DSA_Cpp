#include <iostream>
using namespace std;
int Factorial(int n){
    if(n==0 || n==1)return 1;
    else return n*Factorial(n-1);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0)cout<<"Factorial is not defined for negative numbers.\n";
    else cout<<"Factorial of "<<num<<" is: "<<Factorial(num)<<"\n";
    return 0;
}