/*#include<iostream>
using namespace std;
void hola(){
    cout<<"Hello :)\n";
}
int main(){
    hola;
    return 0;
        
}

//practice
#include <iostream>
using namespace std;
int sum(int a , int b){
    int sum=a+b;
    return sum;

}
int difference(int a , int b){
    int diff=a-b;
    return diff;
}
int main (){
    int x=1,y=1;
    cout<<sum(x,y)<<difference(y,x);
    return 0;

}

//WAF to find the product of 2 numbers- a&b.
#include <iostream>
using namespace std;
int prod(int a ,int b){
    int prodt=a*b;
    return prodt;
}
int main (){
    int x=4,y=3;
    cout<<prod(x,y);
    return 0;
}

//WAF to print if a number is odd or even.
#include <iostream>
using namespace std;
bool type(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}
int main (){
    int N;
    cout<<"Enter a number to check even or odd:";
    cin>>N;
    cout<<type(N);
    return 0;
}

//WAF to print the factorial of a number, n.
#include <iostream>
using namespace std;
int fact(int x){
    int fact= 1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact ;
}
int main(){
    int N;
    cout<<"Enter a number :";
    cin>>N;
    fact(N);
    return 0;
}
    

//Write a function if a funtion is a prime or not
#include <iostream>
using namespace std;
bool prime(int n){
     if(n==1){
    return false;
     }     
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x;
    cout<< "Enter a number"<<endl;
    cin >> x; 
    cout<< prime(x) << endl;
    return 0;
}


//WAF to fimd the binomial coefficient for given n&r.

#include <iostream>
using namespace std;
int fact(int r){
     int f=1;
     for(int i=1;i<=r;i++){
        f *=i;
     }
     return f;
}
int bincoeff(int n, int r){
    int val1= fact(n) ;
    int val2= fact(r);
    int val3= fact(n-r);
    int result = val1/(val2-val3);
    return result;
}
int main (){
    int n,r;
    cout<<"Enter the value of n and r."<<endl;
    cin>>n>>r;
    cout<< bincoeff(n,r);
    return 0;

}
    
//Function overloading example
#include <iostream>
using namespace std;
int sum(int a, int b){
    cout << (a+b)<<endl;
    return a+b;
}
   double sum(double a, double b){
   cout<<(a+b)<<endl;
   return a+b;
}
int main (){
    sum(2,3);
    sum(12,13);
    sum(1.3,2.2);
    return 0;
} 
    
//WAF to print all primes in a Range from 2 to n.
#include <iostream>
using namespace std;
bool isprime(int n){
    if (n==1){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
 
    }
    return true;
}
int allprimes(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main(){
    int N;
    cin>>N;
    allprimes(N);
    return 0;

} 

//Assignment Questions
//Q1: WAF to check if a number is a palindrome in C++.
//(121 is a palindrome , 321 is not)
//A number is called a palindrome if the number is equal to the reverse of a number .
//Eg:121
#include <iostream>
using namespace std;
int reverse(int N){
    int rev=0;
    while(N>0){
        int last=N%10;
        rev=rev*10+last;
        N=N/10;
    }
    return rev;
}
bool ispalindrome(int num ){
    int revnum=reverse(num);
    return num==revnum;
}
int main (){
    int number;
    cout<<"Enter a number to check if it is palindrome or not:";
    cin>>number;
    cout<<ispalindrome(number);
    return 0;
}

//Q2: WAF to calculate the sum of digits of a number.
#include <iostream>
using namespace std;
int sum(int N){
    int add=0;
    while(N>0){
        int l=N%10;
        add=add+l;
        N=N/10;
    }
    return add;
}
int main()
{
    int number;
    cout<<"Enter a Number to calculate sum of its digits:";
    cin>>number;
    int ans= sum(number);
    cout<<ans;
    return 0;
}

//Q3: WAF a funtion which takes 2 numbers as parameters (a&b)and outputs:a^2+b^2+2*ab.

#include <iostream>
using namespace std;
int function(int a , int b){
    int s=a*a+b*b+2*a*b;
    return s;
}
int main(){
    int x,y;
    cout<<"Enter two numbers :";
    cin>>x>>y;
    cout<<function(x,y);
    return 0;
}

//WAF that prints the largest of 3 numbers.

#include <iostream>
using namespace std;
int largest(int a, int b,int c){
    if(a>=b&&a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;

    }
}
int main(){
    int x,y,z;
    cout<<"Enter three numbers:";
    cin>>x>>y>>z;
    cout<<largest(x,y,z);
    return 0;
}
    

//WAF that accepts a character(ch)as parameters & returns the character that occurs after ch in the English alphabet.
//Eg:input='c',return value='d'.
#include <iostream>
using namespace std;
char alphabet(char ch){
    if(ch=='z'){
        return 'a';
    }
    else {
        return ch+1;
    }
}
int main()
{
    char cham;
    cout<<"Enter a character:";
    cin>>cham;
    cout<<alphabet(cham);
    return 0;
}*/

//The End


