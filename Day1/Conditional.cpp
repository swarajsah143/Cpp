
#include<iostream>
using namespace std;

int main(){
    // char name;
    // cout<<"Enter any any alphabet: ";
    // cin>>name;
    // if(name>='A' && name<='Z'){
    //     cout<<"It is UPPERCASE.";  
    // }
    // else if(name>='a' && name<='z'){
    //     cout<<"It is Lower case.";
    // }



    // int i=1;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i++;
    // }
    // int sum=0;
    // for(int i=1;i<=50;i++){
    //     sum=sum+i;
    //     cout<<i<<" ";
    // }
    // cout<<"And the sum is "<<sum<<endl;



    // int n,count=0;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         count+=1;
    //     }
    // }
    // cout<<(count==2 ? "Number is prime ":"Number is composite ");


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


    int n;
    // char ch='A';
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}