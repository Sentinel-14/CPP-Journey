// Clear last i bits of a number 
#include <iostream>
using namespace std;
int clearlast(int num, int i){
    num= num&~0<<i;
    return num;
}


int main(){
    int i, n;
    cin>>n>>i;
    cout<<clearlast(n,i);
    return 0;

}