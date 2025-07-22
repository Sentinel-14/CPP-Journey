#include <iostream>
using namespace std;
int main(){
    int a =32;
    int *ptr =&a;
    cout <<*ptr << endl;

    char ch = 'A';
    char &cho = ch;
    cout<< *&cho<<endl <<cho<<endl;

    cho+= a;
    *ptr += ch;
    cout <<a<<", "<<ch<<endl;
    return 0;

}