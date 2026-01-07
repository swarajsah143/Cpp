#include<iostream>
using namespace std;

int linearSearch(int roll[],int size){
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    string found;
    for(int i=0;i<size;i++){
        if(roll[i]==target){
            return i;    
        }
    }
    return -1;
}
int main(){
    int roll[]={1,3,5,7,9};
    int size=sizeof(roll)/sizeof(roll[0]);

    int result=linearSearch(roll,size);
    cout<<result;

    return 0;
}