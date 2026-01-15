#include<stdio.h>
int main(){
    int var=0;
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                if(var<arr[i]*(j-i)){
                    var=arr[i]*(j-i);
                }

            }
            else{
                if(var<arr[j]*(j-i)){
                    var=arr[j]*(j-i);
                }

            }

        }
    }
    printf("The max area is %d",var);
    return 0;
}