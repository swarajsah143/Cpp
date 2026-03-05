#include<iostream>
using namespace std;

class Teacher{

public:
    Teacher(string d, int a,string n){ // Constructor-- It will nbe called by compiler when object is created
        // cout<<"I am constructor"<<endl;
        depart=d;
        age=a;
        name=n;
    }
    string depart;
    int age;
    string name;

    void getInfo(){
        cout<<"Department: "<<depart<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<endl;
    }

};

int main(){
    Teacher t1("CSE",54,"swaraj");
    Teacher t2("CSE",24,"rahul");
    Teacher t3("CSE",44,"suman");
    t3.getInfo();
    return 0;
}