#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat,int row,int col,string path,vector<string> &ans){
    //Base Case
    int size = mat.size();
    if(row<0 || row>=size || col<0 || col>=size || mat[row][col]==0 || mat[row][col]==-1)return;
    if(row==size-1 && col==size-1){
        ans.push_back(path);
        return;
    }
    //Mark the cell as visited
    mat[row][col]=-1;

    //Down
    helper(mat,row+1,col,path+"D",ans);
    //Up
    helper(mat,row-1,col,path+"U",ans);
    //Right
    helper(mat,row,col+1,path+"R",ans);
    //Left
    helper(mat,row,col-1,path+"L",ans);
    
    //Backtrack
    mat[row][col]=1;
}
vector<string> findPath(vector<vector<int>> &mat){
    int size = mat.size();
    vector<string> ans;
    string path = "";
    
    helper(mat,0,0,path,ans);
    
    return ans;
}
int main(){
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int size = mat.size();
    vector<string> ans = findPath(mat);
    for(const string &path : ans){
        cout << path << endl;
    }
    return EXIT_SUCCESS;
}