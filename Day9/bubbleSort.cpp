#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums={2,4,1,5,6,3,7};
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){

                swap(nums[j],nums[j+1]);
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<nums[k]<<" ";
    }
    return 0;
}
