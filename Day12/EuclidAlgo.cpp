#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int a=28,b=20;
    while(a!=0 && b!=0){
        if(b>a) b=b%a;
        else a=a%b;    
    }
    cout<<max(a,b)<<endl;
    
    return 0;

}