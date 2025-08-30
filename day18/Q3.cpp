// Q3:- Create a base class Person with attributes name and age.
//      Derive a class Studdnt from Person and add an additional attribute studentID. 
//      Implement a method displayStudentInfo() in the Student class to display all details.

//      Inmain function Student class object will be created in this format:
//      Student srudent("alice",20,"S12345");

// Note- when we initialize an object of a derived class, the vase class part has to be constructed first.
//       If we don't initialize it ourselves in the derived class' constructor by calling one of its 
//       constructors, the compiler will attempt to use the default constructor of the base class. 
//       To invoke the parent's parameterized constructor in Child's constructor, syntax is:
//         Child(int x):Parent(x)
//         {......}     

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};
class Student: public Person{
    public:
    string StID;
    Student(string name, int age,string Id){
        this->name=name;
        this->age=age;
        this->StID=Id;
    }

    void StudentInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<StID<<endl;
    }
};
int main(){
    Student student("Alice",20,"S12345");
    student.StudentInfo();
    return 0;
}