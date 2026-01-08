#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    // cout<<vec[0]<<endl; // to access element by index
    // vector<int>vec0(4,0);  // to create vector of size n having same element x---(n,x)
    // cout<<vec0[1]<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
    cout<<"The size is "<<vec.size()<<endl;
    vec.push_back(6);
    cout<<"The size after vector push "<<vec.size()<<endl;
    vec.pop_back();
    vec.pop_back();
    cout<<"The size after pop back "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;


    return 0;
}