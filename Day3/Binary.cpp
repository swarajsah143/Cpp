#include<iostream>
using namespace std;

int main(){
    // int dec,rem,pow=1;
    // string strRem,ans;
    // cout<<"Enter the decimal number: ";
    // cin>>dec;
    // while(dec>0){
    //     rem=dec%2;
    //     strRem=to_string(rem);
    //     ans=strRem+ans;
    //     dec=dec/2;
    //     pow++;
    // }
    // cout<<"The binary is "<<ans<<endl;

    // int bin,rem,ans=0,pow=1;
    // cout<<"Enter binary number: ";
    // cin>>bin;
    // while(bin>0){
    //     rem=bin%10;
    //     ans=ans+(rem*pow);
    //     pow=pow*2;
    //     bin=bin/10;

    // }
    // cout<<"The decimal number is "<<ans<<endl;


    // To check num is power of 2 or not without loop.
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int res=num & (num-1);
    if(res==0){
        cout<<"It is power of 2."<<endl;
        cout<<res<<endl;
    }
    else{
        cout<<"It is not power of 2"<<endl;
        cout<<res<<endl;

    }

    return 0;
}