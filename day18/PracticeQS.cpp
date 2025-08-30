// PRACTICE QUESTION
//Predict the output

// #include<iostream>
// #include<string>
// using namespace std;

// class A{
//     public:
//     A(){ cout<<"Constructor A"<<endl;}
//     ~A(){ cout<<"Destructor A"<<endl;}
// };

// class B: public A{
//     public:
//     B(){ cout<<"Constructor B"<<endl;}
//     ~B(){ cout<<"Destructor B"<<endl;}
// };

// int main (){
//     B obj;
//     return 0;
// }

// predict the output

#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"BASE"<<endl;
    }
};
class Derived: public Base{
    public:
    void print() override {
        cout<<"DERIVED"<<endl;
    }
};

int main(){
    Base* b=new Derived();
    b->print();
    delete b;
    return 0;
}

