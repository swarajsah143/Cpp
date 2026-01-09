# include<iostream>
# include<vector>
using namespace std;

vector<int> pairSum(vector<int>nums,int target){
    vector<int>ans;
    int size=nums.size();
    int st=0,end=size-1;
    while(st<end){
  
        if(nums[st]+nums[end]>target){
            end--;
            
        }
        else if(nums[st]+nums[end]<target){
            st++;
            
        }
        else{
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main(){
    int target=61;
    vector<int>nums={3,2,4};
    // int size=sizeof(nums)/sizeof(nums[0]);
    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(nums[i]+nums[j]==target){
    //             cout<<"["<<i<<","<<j<<"]"<<endl;
    //         }
    //     }

    // }

    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;



 
    return 0;
}