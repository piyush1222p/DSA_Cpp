//Prime number check
#include <iostream>
using namespace std;
string isprime(int n);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isprime(n)<<endl;
    return 0;
}
string isprime(int n){
    if(n<=1 || n<=0)
    {
        return "Not prime";
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return "Not prime";
        }
    }
    return "Prime";
}