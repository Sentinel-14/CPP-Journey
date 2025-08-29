/*
Types of Inheritance
1-single Inheritance  
       base class->derived class
       
2-Multilevel Inheritance
        base class->derived class->derived class

3-Multiple Inheritance
        base class , base class => derived class
        or
        2 base class-> derived class
        
4-Hierarchial Inheritance     
        base-> derived class, derived class....
        
5-Hybrid Inheritance    
        -Mixed   
        -It include all types of inheritances.
               */

//code for multilevel Inheritance

#include <iostream>
#include <string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eats..\n";
    }
    void breathe(){
        cout<<"breathes..\n";
    }

};
class Mamal :public Animal{
    public:
    string bloodtype;
    Mamal(){
        bloodtype ="warm\n";
    }
};
class Dog: public Mamal{
    public:
    void tailwang(){
        cout<<"Dogs wangs its tails\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwang();
    cout<<d1.bloodtype<<endl;
    return 0;


}

