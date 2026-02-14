#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // char arr[]={'a','d','m','\0'}; //combine all character (\0   is a null character whose lenght is not calculated )
    // int nums[]={1,2,3,4,5}; // acts as a pointer and print address
    // cout<<arr<<endl;
    // cout<<strlen(arr)<<endl;
    // cout<<nums<<endl;

    char arr[]="swaraj";
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        c++;
    }
    cout<<c<<endl;

    return 0;
}