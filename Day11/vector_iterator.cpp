#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    vector<int>::iterator it; // instead of this we can write "auto" before it in for 
    for(it=nums.begin();it!=nums.end();it++){ //.begin() , .end()--- they give you iterator(address)
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int> sortVec={6,3,5,2,1,7,4};
    sort(sortVec.begin(),sortVec.end(),greater<int>());   // reverse sort
    // sort(sortVec.rbegin(),sortVec.rend());// reverse sort using rbegin() and rend()

    for (int val:sortVec){
        cout<<val<<" ";
    }
    return  0;
}



