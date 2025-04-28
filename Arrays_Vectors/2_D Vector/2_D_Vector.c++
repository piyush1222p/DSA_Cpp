#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Declaring a 2D vector
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //Printing the 2D vector
    //rows -> vec.size()
    //columns -> vec[i].size()
    cout << "2D Vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}