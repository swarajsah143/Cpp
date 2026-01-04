#include<iostream>
using namespace std;
int main(){
    
    int x;
    cout<<"Enter the no. of stars: ";
    cin>>x;
    int n=x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        n=n-1;
        cout<<endl;
        
    }


    // int n,fac=1;
    // cout<<"Enter any number: ";
    // cin>>n;
    // for(int i=2;i<=n;i++){
    //     fac=fac*i;
    // }
    // cout<<"The factorial of "<<n<<" is "<<fac<<endl;


    // int n;
    // char m='A';
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<m<<" ";
    //         m++;
    //     }
    //     cout<<endl;
    // }


    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n;
    // // char ch='A';
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    return 0;
}