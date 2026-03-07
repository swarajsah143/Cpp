#include<iostream>
using namespace std;

class Teacher{

public:

string depart;
int age;
string name;

    Teacher(string depart, int age,string name){ // Constructor-- It will be called by compiler when object is created
        // cout<<"I am constructor"<<endl;
        this->depart=depart;
        this->age=age;
        this->name=name;
    }

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
    t2.getInfo();
    return 0;
}