/* 
Palindrome in characters 
for example apple is false
            racecar is true


*/

#include <iostream>
#include <cstring>
using namespace std;
int Palindrome(char word[],int n){
    int st=0 , end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            return false;
        }
        st++;end--;

    }
    return true;

}

int main (){
    char word[]="zoz";
    int n=strlen(word);
    cout<<Palindrome(word,n);
    
}