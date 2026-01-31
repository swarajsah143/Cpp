#include<iostream>
using namespace std;
int main(){
    int nums[]={-1,1,0,-3,3};
    int len=sizeof(nums)/sizeof(nums[0]);
    int ans[len];
    for(int i=0;i<len;i++){
        int prod=1;
        for(int j=0;j<len;j++){
            if(i!=j){
                prod=prod*nums[j];
            }
        }
        ans[i]=prod;

    }
    for(int k=0;k<len;k++){
        cout<<ans[k]<<" ";

    }


    // Concept using vectors

    //   vector<int>pref(n,1);
    //     vector<int>suff(n,1);
    //     vector<int>res(n,1);

    //     for(int i=1;i<n;i++){
    //         pref[i]=pref[i-1]*nums[i-1];
    //     }
    //     for(int j=n-2;j>=0;j--){
    //         suff[j]=suff[j+1]*nums[j+1];

    //     }
    //     for(int i=0;i<n;i++){
    //         res[i]=pref[i]*suff[i];


    return 0;
}