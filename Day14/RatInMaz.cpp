#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat,vector<string>& ans,int row,int col,string path,vector<vector<bool>>& vis){
    int n=mat.size();

    if(row<0 || col<0 || row>=n || col>=n || mat[row][col]==0 || vis[row][col]==true) return;

    if(row==n-1 && col==n-1){ // We got ans
        ans.push_back(path);
        return;
    }
    vis[row][col]=true; // making cell true (we have visited)

    helper(mat,ans,row+1,col,path+"D",vis); //Down
    helper(mat,ans,row-1,col,path+"U",vis); // Up
    helper(mat,ans,row,col+1,path+"R",vis); //right
    helper(mat,ans,row,col-1,path+"L",vis); //left

    vis[row][col]=false; // backtracking


}

vector<string> findPath(vector<vector<int>>& mat){
    int n=mat.size();
    vector<string> ans;
    string path="";
    vector<vector<bool>> vis(n,vector<bool>(n,false)); // initializing all cell with false(not visited)
    helper(mat,ans,0,0,path,vis);
    return ans;

}


int main(){

    vector<vector<int>> mat={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans=findPath(mat);
    for(string p:ans){ // printing possible paths
        cout<<p<<endl;
    }

    return 0;
}