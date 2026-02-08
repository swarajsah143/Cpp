#include <iostream>
#include <vector>
using namespace std;

int dominantIndices(vector<int> &nums){
    int size = nums.size();
    int totalSum = 0;
    for (int s = 0; s < size; s++){
        totalSum += nums[s];
    }
    int count = 0, prefix = 0;
    for (int i = 0; i < size - 1; i++){ // up to size-1 to avoid last element
        int remSum = totalSum - prefix - nums[i];
        int n = size - i - 1;
        if (nums[i] * n > remSum){
            count++;
        }
        prefix += nums[i];
    }
    return count;
}
int main(){
    vector<int> nums={5,4,3,1};
    cout<<"The no. of dominant indices is "<<dominantIndices(nums)<<endl;
    return 0;
}