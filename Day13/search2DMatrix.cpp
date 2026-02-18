#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int columns=matrix[0].size();
    int stRow=0;
    int endRow=rows-1;
    while(stRow<=endRow){
        int midRow=stRow+(endRow-stRow)/2;
        if(matrix[midRow][0]<=target && target<=matrix[midRow][columns-1]){
            //found the row
            //now apply binary search to find target
            int st=0;
            int end=columns-1;
            while (st<=end)
            {
                int mid=st+(end-st)/2;
                if(target==matrix[midRow][mid]){
                    return true;
                }
                else if(target<matrix[midRow][mid]) end=mid-1;
                else st=mid+1;
            }
            return false;            
        }else if(target>matrix[midRow][columns-1]) { 
            // search for right row
            stRow=midRow+1;
        }else{
            //search for left row
            endRow=midRow-1;
        }

    }
    return false;
        
}

int main(){
    vector<vector<int>> matrix={
        {1,4,6,8},
        {12,14,17,19},
        {21,24,28,29}
    };
    int target=114;
    cout<<searchMatrix(matrix,target)<<endl;
    
    return 0;
}