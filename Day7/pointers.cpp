#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptr=&a; //int* declares that the variable will be pointer.
    int** ptr2=&ptr; //int** stores address of pointer.
    cout<<a<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of pointer ptr: "<<&ptr<<endl;
    cout<<"Address of pointer ptr: "<<ptr2<<endl;


    //Derefrencing pointers
    cout<<"The value in a: "<<*(&a)<<endl; //"*" before pointers means value inside that pointers
    cout<<"The value in a: "<<**(ptr2)<<endl; 

    
    return 0;
}