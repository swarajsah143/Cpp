# include<iostream>
# include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={1,5,2,7,4,9,3,3,5,5,5,5,5,5,5,5,5,5};
    int size=nums.size();
    sort(nums.begin(),nums.end());
    // for(int n:nums){
    //     cout<<n<<" ";
    // }
    int freq=1,ans=nums[0];
    for(int i=1;i<size;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>size/2){
            cout<<ans<<endl;
        }
    }
    return 0;
}