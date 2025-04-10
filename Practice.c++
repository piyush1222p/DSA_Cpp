#include <iostream>
#include <vector>
using namespace std;
int f_s(int n);
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is: " << f_s(n) << endl;
    return 0;
}
int f_s(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    return f_s(n-1)+f_s(n-2);
}