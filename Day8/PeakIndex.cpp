#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={0,3,8,9,5,2};
    int st=1;
    int end=arr.size()-2; // avoid edges because if mid becomes 0 then arr[mid-1] is not possible so line 11 will throw an error.
    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"The index of peak element is "<<mid<<endl;
            break;    
        }
        else if(arr[mid]>arr[mid-1]){
            st=mid+1;
        }
        
        else{
            end=mid-1;
        }
    }
    
    
    return 0;
}