// Count how many times lowercase vowels occured in a string entered by the user.

#include <iostream>
#include <string>

using namespace std;
int main (){
    string input;
    cout<<"Enter a string:";
    getline(cin,input);
    int count=0;
    for (char ch: input){
        if (ch=='a' ||ch=='e'||ch=='i'||ch=='o'|| ch=='u'){
            count++;
        }
        
    }
    cout<<"Number of Lowercase vowels:"<<count<<endl;
    return 0;
}

