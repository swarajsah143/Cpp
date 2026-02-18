#include<iostream>
#include <climits>
using namespace std;

int maxSum(int matrix[3][3],int rows,int columns){
    int ans=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum=0;
        for(int j=0;j<columns;j++){
            rowSum+=matrix[i][j];
        }
        ans=max(ans,rowSum);
    }
    return ans;
}

int main(){
    int matrix[3][3]={{1,2,3},{5,6,71},{9,10,11}};
    int rows=3;
    int columns=3;   
    cout<<maxSum(matrix,rows,columns)<<endl;

    return 0;
}