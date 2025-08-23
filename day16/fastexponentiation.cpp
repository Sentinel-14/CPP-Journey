//Fast Exponentiation X^n

#include <iostream>
using namespace std;
int exponentiation(int x,int n){
    int ans=1;
    while(n>0){
        int lastdigit = n & 1;
        if (lastdigit==1){
            ans*=x;
        }

            x*=x;
            n>>=1;
        }

        return ans;
}

int main (){
    int x,n;
    cin>>x>>n;
    cout<<exponentiation(x,n)<<endl;
    return 0 ;

}