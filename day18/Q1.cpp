// Q1:-  Create a class to store Complex numbers . Using operator overloading,
//       create the logic to subtract one complex number from another.
// Note:-In Complex numbers, the real part of 1st gets subtracted from the real private
//       of 2nd number. Same goes for the imaginary part. 

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

    Complex operator + (Complex &om){
        int finalreal= this->real+om.real;
        int finalimg= this->img+om.img;
        Complex c3(finalreal, finalimg);
        cout<<"Ans= ";
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
    return 0;
    
}