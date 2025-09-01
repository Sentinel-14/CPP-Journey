//Print X to the power N.

#include <iostream>
using namespace std;
int power(int x, int n){
    if(n==0) return 1;

    int halfpow=power(x,n/2);
    int halfpowsquare=halfpow*halfpow;
    if(n%2 !=0){
        return x*halfpowsquare;
    }
    return halfpowsquare;
}
int main(){
    cout<<power(2,5);
    return 0;
}