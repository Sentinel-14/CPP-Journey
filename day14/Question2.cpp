// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices .
// Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings.
// Otherwise , return false.
// Example:
// Input : s1="bank"
//        s2="kanb"
// Output : true
// Explanation: For example, swap the first character with the last character of s2 to make "bank".

#include <iostream>
#include <string>

using namespace std;
bool Canmakequal(string s1,string s2){
    if (s1.length()!=s2.length()){
        return false;}
        else if (s1==s2){
            return true;
        }

        //Find position where characters differ
        int diffCount=0;
        int pos1=-1, pos2=-1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                diffCount++;
            
            if (diffCount ==1){
                pos1=i;
            }
            else if (diffCount ==2){
                pos2=i;
            }
            else{
                return false;
            }
            }
        }
            return (diffCount == 2 && s1[pos1]==s2[pos2] && s1[pos2]==s2[pos1]);
        }


int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
   if( Canmakequal(s1,s2)){
    cout<<"true"<<endl;
   }else {
    cout<<"false"<<endl;
   }
    return 0;


}