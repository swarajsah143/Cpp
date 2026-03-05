#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int> nums={1,2,3,2,5};
    int n=nums.size();
    map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(nums[i])!=m.end()){// num found
            m[nums[i]]++;
        }
        else{
            m[nums[i]]=1;
        }
    }
    int sum=0;
    for(auto pair:m){
        if(pair.second==1){
            sum+=pair.first;
        }
    }
    cout<<sum<<endl;
    
    return 0;
}