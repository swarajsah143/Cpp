#include<iostream>
using namespace std;

int main(){
    int marks[]={1,2,3,4,5,6,7,8};
    int posSm,posLr;
    int size=sizeof(marks)/sizeof(marks[0]);
    int small=__INT_MAX__;
    int large=-10000;
    // cout<<small<<endl;
    for(int i=0;i<size;i++){
        if(marks[i]<small){
            small=marks[i];
            posSm=i;
        }
        if(marks[i]>large){
            large=marks[i];
            posLr=i;

        }

    }
    swap(marks[posSm],marks[posLr]);
    for(int j=0;j<size;j++){
        cout<<marks[j]<<" ";
    }
    return 0;
}