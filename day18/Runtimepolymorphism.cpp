// RUN TIME POLYMORPHISM
//Function Overriding- Parent & child both contain the same function with different implementation. The parent class function is said to be overridden.
//Virtual Functions- A virtual function is a member function that you expect to be redefined in derived classes.
    //virtual void Hello(){}
    //virtual functions are Dynamic in nature.
    //Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
    //A virtual function is called during Runtime.

    
#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show..\n"; // function overriding
    }
    virtual void hello(){
        cout<<"parent hello..\n";
    }

};

class Child: public Parent{
    public:
    void show(){
        cout<<"child class show..\n";//function overriding
    }
    void hello(){
        cout<<"child hello\n";
    }
};
int main(){
    Child child1;
    child1.show();
    Parent *ptr;
    ptr=&child1;//Run time Binding
    ptr->hello();//Virtual fuctions

    return 0;
}