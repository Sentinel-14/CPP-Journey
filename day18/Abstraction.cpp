//ABSTRACTION 
//Hiding all unnecessary details & showing only the importants parts
//Abstract Classes & Pure virtual functions

//Abstract Classes
   //Abstract classes are used to provide a base class from which other classes can be derived.
   //They cannot be instantiated and are meant to be inherited.
   //Abstract classes are typically used to define an interface for derived classes.
   // It contains atleast one pure virtual function. 

//Pure virtual function
   //A pure virtual function (or abstract function) is a virtual fuction with no definition/logic.
   //It is declared by assigning 0 at the time of declaration.
   // virtual void func()=0 ; 

#include <iostream>
#include <string>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;//pure virtual funtion or abstract function 
};
class Circle: public Shape{
    public:
    void draw(){
        cout<<"draw Circle..\n";
    }
};
class Square: public Shape{
    public:
    void draw(){
        cout<<"draw Square..\n";
    }
};

int main(){
    Circle cir1;
    cir1.draw();
    Square squ1;
    squ1.draw();

    //Shape sh1; //show error because it is a abstract function .

    return 0;
}