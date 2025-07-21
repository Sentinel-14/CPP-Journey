/*
//Binary to Decimal number system.
#include <iostream>
using namespace std;
int btd(int binNum){
    int n=binNum;
    int decNum=0;
    int pow=1; //2^0,2^1,2^2.....

    while(n>0){
        int lastdig=n%10;
        decNum=decNum+lastdig*pow;
        pow=pow*2;
        n=n/10;
    }
    return decNum;
}
int main(){
    int x;
    cout<<"Enter a binary number:";
    cin>>x;
    cout<<btd(x);
    return 0;
}*/

//Decimal to Binary number system program

#include <iostream>
using namespace std;
int dtb(int n){
int binary =0;
int T=1;
while (n>0){
    int remain=n%2;
    binary=binary+remain*T;
    T=T*10;
    n=n/2;
    
}
return binary;
}
int main(){
    int x;
    cout<<"Enter a Decimal number to change into binary number:";
    cin>>x;
    cout<<dtb(x);
    return 0;
}