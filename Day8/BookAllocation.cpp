#include <iostream>
#include <vector>
using namespace std;


bool isValid(vector<int> &arr,int n,int m,int maxAllowedPages){
    int stud=1,pages=0;
    for(int i=0;i<n;i++){

        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(arr[i]+pages<=maxAllowedPages){
            pages+=arr[i];
        }else{
            stud++;
            pages=arr[i];
        }
    }
    if(stud>m){
        return false;

    }else{
        return true;
    }
}

int allocateBooks(vector<int> &arr,int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    int st=0,end=sum,ans=-1;

    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){//Valid--go to left
            ans= mid;
            end=mid-1;

        }else{// invalid --- go to right
            st=mid+1;
        }
    }
    return ans;
    

}
int main(){
    vector<int> arr={2,1,4,3};
    int n=4;
    int m=2;
    cout<<"The min of max pages is "<< allocateBooks(arr,n,m)<<endl;
    
    return 0;
}
