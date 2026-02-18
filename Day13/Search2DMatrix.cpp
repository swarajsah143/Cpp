#include<iostream>
// #include <utility>

using namespace std;

pair<int,int> getKeyPair(int matrix[3][4],int rows,int columns,int key){
    pair<int,int> p={-1,-1};
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j]==key){
                p.first=i+1;
                p.second=j+1;
                return p;
            }
        }
    }
    return p;


}

int main(){
    int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rows=3;
    int columns=4;
    int key=2;
    pair<int,int> result=getKeyPair(matrix,rows,columns,key);
    cout<<"Key found at row " <<result.first<<" ";
    cout<<"and column "<< result.second<<endl;
    // cout<<matrix[2][2]<<endl;

    
    return 0;
}