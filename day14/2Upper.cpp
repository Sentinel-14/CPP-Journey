//converting the elements of string to uppercase.

#include <iostream>
#include <cstring>
using namespace std;
void ToUpper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='A'&&ch<='Z'){
            continue;
        }else{
           word[i]= ch-'a'+'A';
        }
    }

}


int main(){
    char word[]="ApPle";
    ToUpper(word, strlen(word) );
    cout<<word<<endl;
    return 0;

}
