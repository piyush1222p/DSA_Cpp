#include <iostream>
using namespace std;
void printnumbers(int n){
    if(n==1)cout<<"1\n";
    else{
        cout<<n<<"\n";//Print current number
        printnumbers(n-1);//Recursive call with n-1
        //cout<<n<<"\n";
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<1)cout<<"Please enter a +ve integer.\n";
    else{
        cout<<"Numbers from 1 to "<<num<<" are: \n";
        printnumbers(num);
    }
    return 0;
}