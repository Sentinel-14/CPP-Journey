/*
INHERITANCE
When properties & member functions of base class are passed on to the derived class.
   base class/ super/parent (Class A) -> derived/sub/child (class B)
   
   */

   #include <iostream>
   #include <string>
   using namespace std;
   class Animal{
    public:   
    string color;
     void eat() {
        cout<<"eats\n";
     }
     void breathe(){
        cout<<"breathes\n";
     }


   }; 
   class Fish: public Animal {
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
   };
   int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe(); // not possible due to protected.
    return 0;
      
   }