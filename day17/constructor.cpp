/* 
Special method invoked automatically at time object creation. Used for Initialisation.
- Same name as class.
-Constructor doesn't have a return type.
-Only called once (automatically) , at object creation.
-Memory allocation happens when constructor is called.
*/
#include <iostream>
using namespace std;
class Car{
    string name;
    string color;
    public:
    Car(){
        cout<<"Constructor without parameter."<<endl;
    }
    Car(string name, string colorv){
        cout<<"Constructor withparamer \n Constructor is called. object being created..\n";  
        this->name= name;
        this->color= color;
    }
    void start(){
        cout<<"car has started..\n";
    }

    void stop(){
        cout<<"car has stopped..\n";
    }
    // Getter
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }
};
int main(){
    Car c1("Mercedes", "Black") ;
    Car c2("BMW", "Black");
    Car c3;

    cout<<"Car Name:"<<c1.getName()<<endl;
    cout<<"Car color:"<<c1.getColor()<<endl;


    return 0;

}