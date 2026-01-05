#include<iostream>
using namespace std;
int main(){
    
    // int x;
    // cout<<"Enter the no. of stars: ";
    // cin>>x;
    // int n=x;
    // for(int i=1;i<=x;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     n=n-1;
    //     cout<<endl;
        
    // }


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

    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=0;i<n;i++){

    //     for(int k=0;k<i;k++){

    //         cout<<" ";     
    //     }
    //     for(int j=i;j<n;j++){

    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cout<<"Enter the valuee of n: ";
    // cin>>n;
    // for(int i=n;i>0;i--){
    //     for(int j=1;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k;k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout<<"Enter the valuee of n: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<n;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     for(int m=1;m<i;m++){
    //         cout<<(i-m);
    //     }
    //     // for(int j=i;j<n;j++){
    //     //     cout<<" ";
    //     // }

    //     cout<<endl;
    // }
    


    // For upper triangle
    int n;
    cout<<"Enter the valuee of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int s=0;s<1;s++){
            cout<<'*';
        }
        for(int j=0;j<2*i-1;j++){
            if(j>=0){
            cout<<" ";
            }
        }
        if(i!=0){
            cout<<"*";
        }
        cout<<endl;
     
    }

//For lower triangle

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=0;k<1;k++){
            cout<<'*';
        }
        for(int l=0;l<2*(n-2-i)-1;l++){
            cout<<" ";
        }
        if(i!=n-2){
            cout<<"*";
        }
        

        // for(int j=0;j<2*i-1;j++){
        //     if(j>=0){
        //     cout<<" ";
        //     }
        // }
        // if(i!=0){
        //     cout<<"*";
        // }
        cout<<endl;
     
    }
    return 0;
}