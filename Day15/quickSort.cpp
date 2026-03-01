#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& nums,int st,int end){

    int piv=nums[end];
    int idx=st-1;
    for(int i=st;i<end;i++){
        if(nums[i]<=piv){
            idx++;
            swap(nums[i],nums[idx]);
        }
    }
    idx++;
    swap(nums[end],nums[idx]);
    return idx+1;
}

void quickSort(vector<int>& nums,int st,int end){

    if(st<end){ //Base Case is when st==end
        int pivot=partition(nums,0,nums.size()-1);

        quickSort(nums,st,pivot-1);
        quickSort(nums,pivot+1,end);
    }
}

int main(){

    vector<int> nums={6,2,3,5,7,9,4};
    quickSort(nums,0,nums.size()-1);
    for(int el:nums){
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}