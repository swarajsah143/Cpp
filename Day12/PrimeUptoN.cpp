#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int n=50;
    vector<bool> isPrime(n+1,true);
    int count=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;
            for(int j=2*i;j<n;j+=i){
                isPrime[j]=false;          
              }
        }
    }
    cout<<"The number of Prime numbers up to "<<n<<" is "<<count<<endl;

    return 0;
}