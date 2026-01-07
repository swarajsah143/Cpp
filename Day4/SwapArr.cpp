#include<iostream>
using namespace std;

void reverseArr(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]); //Two pointer approach
        start++;
        end--;
    }


}

int main(){
    int arr[]={1,2,31,4,5,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,size); //Calling
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }




    // int arr[]={1,2,3,4,5};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int rev[size]={};

    // int pos=size-1;
    // for(int i=0;i<size;i++){
    //     rev[i]=arr[pos];
    //     pos--;    
    // }
    // for(int j=0;j<size;j++){
    //     cout<<rev[j]<<" ";
    // }




    return 0;
}    