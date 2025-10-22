// A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime(2,3,5 or 7).
#include <iostream>
#include <string>
using namespace std;
bool checkprime(int a, int i){
    if(i==a){
        return 1;
    }
    if(a%i==0){
        return 0;
    }else{
        return (a, i+1);
    }
}
int Gooddigits(int n,int i){
    if(i%2==0){

    }
}

int main(){
    int n;
    cout<<"Enter the length of string";

}