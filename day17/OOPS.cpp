/*
OOPS Object Oriented Programming
  It is basically a good approach or style of writing code.

>> Class and Objects
   Class- Group of entities 
   Object- Entities in the class
   
   
*/

#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    float cgpa;
    public: 

    void percentage(){
        cout<<cgpa*10<<endl;
    }
};
int main(){
    Student s1;
    
    s1.percentage();    


}