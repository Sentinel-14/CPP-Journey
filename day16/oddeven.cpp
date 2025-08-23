//Check if odd or even using bitwise operator
#include <iostream>
using namespace std;
void oddoreven(int num){
    if(!(num&1)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    oddoreven(num);
    return 0;
}

