#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void allPermute(vector<int>& nums, vector<vector<int>>& ans, int idx) {

    if (idx == nums.size()) {
        for(int el:nums){
            cout<<el<<" ";
        }
        cout<<endl;
        return;
    }
    
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);          
        allPermute(nums, ans, idx + 1);    
        swap(nums[idx], nums[i]);          
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    allPermute(nums, ans, 0);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    
    vector<vector<int>> result = permute(nums);


    return 0;
}
