#include <iostream>
using namespace std;
void digits(int n);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    digits(n);
    return 0;
}
void digits(int n){
    int count=0;
    int sum=0;
    while (n!=0)
    {
        int digits=n%10;
        cout<<digits<<endl;
        count++;
        sum+=digits;
        n/=10;
    }
    cout<<"Total digits: "<<count<<endl;
    cout<<"Sum of digits: "<<sum<<endl;
}