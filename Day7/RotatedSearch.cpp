#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={3,4,5,6,7,0,1};
    int st=0;
    int end=nums.size()-1;
    int mid;
    int target=7;
    while(st<=end){
        mid=st+(end-st)/2;
        if(nums[mid]==target){
            cout<<"The position is "<<mid<<endl;
        }
        if(nums[st]<=nums[mid]){
            //left half is sorted
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{ //right half is sorted
            if(nums[mid]<=target && target<=nums[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        
    }
    
    return 0;
}