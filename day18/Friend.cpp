//Friend Class and Function
//A friend class or a friend function can access private and protected members of other classes in which it is declared as a friend.

#include<iostream>
#include<string>
using namespace std;
class A{
    string secret="secret data";
    friend class B;
    friend void revealsecret(A &obj);
};

class B{//becomes a friend class of A
    public:
    void showsecret(A &obj){
        cout<<obj.secret<<endl;
    }
};
void revealsecret(A &obj){
    cout<<obj.secret<<endl;

}

int main(){
    A a1;
    B b1;

    b1.showsecret(a1);
    revealsecret(a1);
    return 0; 
}