//Compile Time Polymorphism

//Function Overloading - 

// #include<iostream>
// #include<string>
// using namespace std;
// class Print{
//     public:
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }
//     void show(string str){
//         cout<<"string:"<<str<<endl;
//     }
// };
// int main(){
//     Print obj1;
//     obj1.show(25);
//     obj1.show("Bhavnish Goel");
//     return 0;
// }

//Operator Overloading - return type operator Opsymbol(){.....}

#include <iostream>
#include <string>
using namespace std;
class Complex{
    int real;
    int img;
    
    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    Complex operator + (Complex &c2  ){
        int resReal= this->real+c2.real;
        int resImg=this->img+ c2.img;
        Complex c3(resReal, resImg);
        cout<<"res=";
        c3.showNum();
        return c3;
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();
    
    Complex c3=c1+c2;
    c3.showNum();
    
    


    return 0;
}