// RECURSION
// When a fuction repeatedly calls itself
// -iteration
// -function
// Recursion- It is a method of solving computational problems 
//            where the solution depends on solutions to smaller 
//             instances of the same problem. 


//understanding using math
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }

    
    return n*fact(n-1);
}
int main(){
    int ans= fact(5);
    cout<<ans<<endl;
    return 0;
}