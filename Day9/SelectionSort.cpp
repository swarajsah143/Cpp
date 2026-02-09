#include <iostream>
#include <vector>
using namespace std;
int main(){


    vector<int> nums={2,11,4,1,5,6,3,7};
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(nums[i],nums[smallestIdx]);

    }
    for(int k=0;k<n;k++){
        cout<<nums[k]<<" ";
    }
    return 0;
}