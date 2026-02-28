#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>& nums,int st,int mid,int end){
    vector<int> temp;
    int i=st,j=mid+1;
    // Conquoring by comparing elements
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;

        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    // if remaining element is there in left sorted part 
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;

    }
    // if remaining element is there in right sorted part 

    while(j<=end){
        temp.push_back(nums[j]);
        j++;

    }
    // store temporary elements into original array.
    for(int idx=0;idx<temp.size();idx++){
        nums[idx+st]=temp[idx];
    }

}

void mergeSort(vector<int>& nums,int st,int end){

    if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(nums,st,mid);  //seperating left half
        mergeSort(nums,mid+1,end); //seperating right half
        // Merging by sorting
        merge(nums,st,mid,end);
    }
}

int main(){

    vector<int> nums={43,67,55,4,81,12,14};
    int n=nums.size();
    mergeSort(nums,0,nums.size()-1);

    for(int el:nums){
        cout<<el<<" "; // printing out elememnts 
    }
    cout<<endl;

    return 0;
}