#include <iostream>
using namespace std;
int Armstrong(int n);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(Armstrong(n)==1){
        cout<<n<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
    return 0;
}
int Armstrong(int n){
    int sum=0;
    int temp=n;
    while (n!=0)
    {
        int digits=n%10;
        sum+=digits*digits*digits;
        n/=10;
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
}