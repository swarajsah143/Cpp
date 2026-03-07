#include<iostream>
using namespace std;

class Person{
public:
    string dept;

    Person(string dept){
        this->dept=dept;
    }
      
};
class Student: public Person{ // here parent class "Person" is inherited
public:
    int age;
    string name;
    Student(string name,int age,string dept):Person(dept){ // here constructor is inherited
        this->name=name;
        this->age=age;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<dept<<endl;
    }

};

int main(){
    Student s1("Swaraj",12,"CSE");
    s1.getInfo();
    return 0;
}