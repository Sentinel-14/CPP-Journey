/*
STATIC KEYWORD
  >STATIC VARIABLES
   - Variables declared as static in a function are created & intialised once for the lifetime of the program. //in function
   -Static variables in a class are created & initialised once. They are shared by all the objects of the class. // in Class
  >STATIC OBJECT */

   //Static variable in function
// #include <iostream>
// using namespace std;
// void counter(){
//     static int count =0;//static variable
//     count++;
//     cout<<"count: "<<count<<endl;
// }   
// int main(){
//     counter();
//     counter();
//     counter();
//     return 0;
// }

     //Static variable in class
// #include <iostream>
// #include <string>
// using namespace std;
// class Example{
//     public:
//     static int x;
// }     ;
// int Example::x=0;
// int main(){
//     Example eg1;
//     Example eg2;
//     Example eg3;
//     cout<<eg1.x++<<endl;
//     cout<<eg2.x++<<endl;
//     cout<<eg3.x++<<endl;

//     return 0;
// }
  
     //Static Object
#include <iostream>
#include <string>
using namespace std;
class Example{
    public:
    Example(){
        cout<<"Constructor..\n";
    }
    ~Example(){
        cout<<"Destructor..\n";
    }

};
int main(){
    int a =0;
    if(a==0){
      static Example eg1;
    }
    cout<<"Code Enging..\n";
    return 0;

} 
