/*#include <iostream>
using namespace std;
int main (){
    int n;
    int fact=1;
    cout<<"Enter a number to find the factorial:";
    cin>>n;
     if (n==0){
        cout<<"1"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            fact*=i;}
            cout<<fact<<endl;
        
    
}
return 0;
}

#include <iostream>
using namespace std;
int main(){
    int i,n,x;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
        x=n*i;
        cout<<n<<"*"<<i<<"="<<x<<endl;
    }
    return 0;
}
 
#include <iostream>
using namespace std;
int main(){
    int n,m,a,b,arm;
    cout<<"Enter a number"<<endl;
    cin>>n;
    m=n;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    arm=a*a*a+b*b*b+n*n*n;
    if(m==arm){
        cout<<"The given number is Armstrong number";
    }else{
        cout<<"The given number is not a Armstrong number";
    }
return 0;
}

#include <iostream>
using namespace std;
int main (){
    int N,i,j,x,y;
    cout<<"Enter a number :";
    cin>>N;
    for (i=2;i<=N;i++){
        x=i;
        y=0;
        for(j=2;j<x;j++){
            if (x%j==0){
                y++;
                }
            }
            if(y==0){
                cout<<x<<endl;
            }
            }
        
    
return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int N,a,b,c,d,e;
    a=0;
    b=1;
    d=2;
    cout<<"Enter the number:";
    cin>>N;
    if (N<2){
        cout<<endl;
        cout<<a<<" "<<b<<" ";
    }else{
        cout<<endl;
        cout<<a<<" "<<b<<" ";
        while(d<N){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            d++;           
        }
    }
    return 0;
}*/