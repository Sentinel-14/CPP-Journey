//Find the total ways in which n firends can be paired up. Each freind can only be paired once.
#include <iostream>
using namespace std;
int friendpair(int n){
    if(n==1||n==2){
        return n;
    }
    return friendpair(n-1)+(n-1)*friendpair(n-2);
}
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    cout<<friendpair(x)<<endl;
    return 0;
    
}