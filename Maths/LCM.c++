#include <iostream>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //edge case
    a=abs(a);
    b=abs(b);
    cout<<"LCM is "<<LCM(a,b)<<endl;
    return 0;
}
int GCD(int a,int b){
    //edge case
    if (b==0) return a;
    //recursive case
    return GCD(b,a%b);
}
int LCM(int a,int b){
    //edge case
    if(a==0 or b==0) return 0;
    //LCM Calculation
    return (a*b)/GCD(a,b);
}