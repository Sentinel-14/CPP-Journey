//In this problem we are going to convert all elements of the strings into lower form.

#include <iostream>
using namespace std;
void Lower(char word[],int n){
    for (int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a'&&ch<='z'){
            continue;
        }else if (ch>='A'&& ch<='Z') {
            word[i]=ch-'A'+'a';
        }
    }
}
int main(){
    char word[14]="BhAvNIsh Goel";
    Lower(word,13);
    cout<<word<<endl;
    return 0;


}

