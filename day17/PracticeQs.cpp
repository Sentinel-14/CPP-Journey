/*
Create a User class with properties :
 id (private), username(public) & password(private).
Its id should be initialized in a parameterised constructor.
It should have a Getter & Setter for password.
*/


#include <iostream>
#include <string>
using namespace std;

class User{
   private:
    int id;
    string password;
   public: 
    string username;

    User(int id){
        this->id=id;
    }

    //Getter
    string Getpassword(){
        return password;
    }
    //setter
    void Setpassword(string password){
        this->password=password;
    }
};
int main(){
    User u1(101);
    u1.username="Maruti";
    u1.Setpassword("bamar");

    cout<<"username:="<<u1.username<<endl;
    cout<<"password:="<<u1.Getpassword()<<endl;  
    return 0;
    
}