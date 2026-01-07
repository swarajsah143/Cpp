#include<iostream>
using namespace std;

int main(){
    int marks[5]={44,55,-33,22,7};
    int posSm,posLr;
    int size=sizeof(marks)/sizeof(marks[0]);
    int small=__INT_MAX__;
    int large=-10000;
    // cout<<small<<endl;
    for(int i=0;i<5;i++){
        if(marks[i]<small){
            small=marks[i];
            posSm=i;
        }
        if(marks[i]>large){
            large=marks[i];
            posLr=i;

        }

        // We can also use min,max function
        // small=min(small,marks[i]);
        // large=max(large,marks[i]);
        cout<<marks[i]<<" ";

    }
    cout<<endl;
    cout<<"The smallest mark is "<<small<<endl;
    cout<<"The position of smallest mark is "<<posSm<<endl;
    cout<<"The Largest mark is "<<large<<endl;
    cout<<"The position of smallest mark is "<<posLr<<endl;



    return 0;
}