//To reverse the element in a string.we swap the first and last elemtent and so on
#include <iostream>
using namespace std;
void Reverse(char word[],int n){
    int st=0, end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
int main(){
    char word[]="code";
    Reverse(word,4);
    cout<<"reversed string is: "<<word<<endl;
    return 0;

}