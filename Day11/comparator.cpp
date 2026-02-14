#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> v={{4,1},{1,0},{3,1}};
    v.emplace_back(4,2);
    sort(v.begin(),v.end(),comparator);
    for(auto p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }


    return 0;
}