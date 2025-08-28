/*
COPY CONSTRUCTOR
Special constructor(default) used to copy properties of one object into another.

//custom copy constructor

Car(Car &original){
cout<<"copying..\n";
name=original.name;
price=original.price;
}
*/

#include <iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    Car(string name, string color){
        this-> name=name;
        this-> color=color;
    }
    Car(Car &original){
        cout<<"copying original to new.. \n";
        name= original.name;
        color= original.color;
        
    }
};

int main(){
    Car c1("Maruti suzuki alto","white");

    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;

}