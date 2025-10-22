//We are given a string S, we need to find the count of all contiguous substings starting and ending with the same character.
#include <iostream>
#include <string>
using namespace std;
void substring(string s,string temp,int i , int start ,int end){
    if(start==end){
        return;
    }
    if(i==end){
        temp="";
        i=start+1;
        return substring(s,temp,i,start+1,end);
    }
    
    temp=temp+s[i];

    
    if(temp[0]==s[i]){ 
        cout<<temp<<endl;return substring(s,temp,i+1,start,end);
    }
    return substring(s,temp,i+1,start,end);
}

int main(){
    string S="abcab";
    int n=S.size();
    cout<<n<<endl;
    substring(S,"",0,0,n);
    return 0;
}