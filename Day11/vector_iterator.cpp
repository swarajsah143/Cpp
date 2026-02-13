#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    vector<int>::iterator it; // instead of this we can write "auto" before it in for 
    for(it=nums.begin();it!=nums.end();it++){ //.begin() , .end()--- they give you iterator(address)
        cout<<*(it)<<" ";
    }
    cout<<endl;

    return  0;
}