//Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <iostream>
#include <string>
using namespace std;
bool IsAnagram(string str1,string str2){
    if (str1.length()!=str2.length()){
        return false;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        count[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++){
        if(count[str2[i]-'a']==0){
            cout<<"NOT VALID ANAGRAM\n";
            return false;
        }count[str2[i]-'a']--;
    }
    cout<<"VALID ANAGRAM"<<endl;
    return true;
}

int main(){
    string str1= "anagram" , str2="anagram";
    IsAnagram(str1,str2);
    return 0;


    

}