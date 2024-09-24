#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
class Student: public Person {
    public:
        int rollNo;
    Student(string name, int age, int rollNo): Person( name, age){
        this-> rollNo = rollNo;
    }
};

class Subject : public Student{
    public:
        string subject;
    Subject(string name, int age, int rollNo, string subject): Student(name, age, rollNo){
        this->subject=subject;
    }
    void getInfo(){
        cout << name << " " << age << " " << rollNo  << " " << subject << endl;
    }
};

int main(){
    Subject s1("Mani", 21, 2999991, "Physics");
    s1.getInfo();
    return 0;
}