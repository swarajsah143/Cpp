#include<iostream>
#include<vector>
using namespace std;

void allSubset(vector<int>& nums,vector<int>& ans,int i){
    if(i==nums.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    
    ans.push_back(nums[i]);
    allSubset(nums,ans,i+1);
    // exclude
    ans.pop_back();
    allSubset(nums,ans,i+1);
}

int main(){
    vector<int> nums={1,2,3};
    vector<int> ans;
    int n=nums.size();
    allSubset(nums,ans,0);
    
    return 0;
}