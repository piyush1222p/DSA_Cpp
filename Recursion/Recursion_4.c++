#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1)return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0)cout<<"Please enter a +ve integer.\n";
    cout<<"Fibonacci of "<<num<<" is: "<<fibonacci(num)<<"\n";
    return 0;
}