#include<iostream>
using namespace std;
// void hello(){
//         cout<<"Hello";
//     }
int fac(int x){
    int fac=1;
    for(int i=2;i<=x;i++){
        fac=fac*i;
        
    }
    return fac;
}
int main(){
    // hello();
    int x=6;
    int r=3;
    cout<<endl;
    cout<<"The bionomial is "<<(fac(x))/(fac(r)*fac(x-r));
    
    return 0;
}