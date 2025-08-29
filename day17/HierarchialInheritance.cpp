//Hierarchial Inheritance

#include <iostream>
#include <string>
using namespace std;
class Animal{
    public:
    string name;
    void eat(){
        cout<<"eats..\n";
    }
    void breathe(){
         cout<<"breathes..\n";
    }
};
class Air: public Animal{ public:
    void Bird(){
        cout<<"Flying..\n";
    }
};
class water: public Animal{ public:
    void Fish(){
        cout<<"Swims..\n";
    }
};
class land: public Animal{ public:
    void mammal(){
        cout<<"walking..\n";
    }
};

int main(){
    Air a1;
    a1.name="Bird\n";
    cout<<a1.name;
    a1.eat();
    a1.breathe();
    a1.Bird();

    water w1;
    w1.name="Fish\n";
    cout<<w1.name;
    w1.eat();
    w1.breathe();
    w1.Fish();

    land l1;
    l1.name="mammal\n";
    cout<<l1.name;
    l1.eat();
    l1.breathe();
    l1.mammal();
    
    return 0;
}