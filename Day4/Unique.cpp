#include<iostream>
using namespace std;
int main(){
    int arr[]={1,22,3,4,1,2,3,5,33,55};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int pos=0;
    int unq[size]={};
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count==1){
            unq[pos]=arr[i];
            pos++;

        }
    }
    for(int k=0;k<pos;k++){
        cout<<unq[k]<<" ";
    }
    return 0;
}