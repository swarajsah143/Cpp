#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    int  res=1;
    cout<<"Enter any number to check prime or not: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<"Neither prime nor composite";
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            res=0;
        }
    }
    if(res==1){
        cout<<"Prime"<<endl;
    }



    return 0;
}