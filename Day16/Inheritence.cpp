#include<iostream>
using namespace std;

class Person{
public:
    string dept;

    Person(string dept){
        this->dept=dept;
    }
      
};
class Gender{
public:

    string sex;
    Gender(string sex){
        this->sex=sex;
    }
};
class Student: public Person,public Gender{
     // here parent class "Person" and "Gender" is inherited(Multiple inheritence )
public:
    int age;
    string name;
    Student(string name,int age,string dept,string sex):Person(dept),Gender(sex){ 
        // here constructor is inherited
        this->name=name;
        this->age=age;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Sex: "<<sex<<endl;
    }

};

int main(){
    Student s1("Swaraj",12,"CSE","Male");
    s1.getInfo();
    return 0;
}