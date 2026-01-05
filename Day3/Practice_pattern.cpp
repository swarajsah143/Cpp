#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of  n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<"*";

        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";

        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int k=i;k<n;k++){
            cout<<"*";


        }
        cout<<endl;
    }
    return 0;
}