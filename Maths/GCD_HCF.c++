#include <iostream>
using namespace std;
int GCD(int a, int b);
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //edge case
    a=abs(a);
    b=abs(b);
    cout<<"GCD is "<<GCD(a,b)<<endl;
    return 0;
}
int GCD(int a,int b){
    //edge case
    if(b==0) return a;
    //recursive case
    return GCD(b,a%b);
}