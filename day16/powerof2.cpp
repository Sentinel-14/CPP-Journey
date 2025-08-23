// Check for power of 2 , mean is it 2^n
#include <iostream>
using namespace std;
void powerof2(int n){
    if(!(n&n-1)){
        cout<<"Power of 2"<<endl;
    }else { 
        cout <<"Not Power of 2"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    powerof2(n);


}