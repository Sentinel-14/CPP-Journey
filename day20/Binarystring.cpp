//Print all the Binary string of size N without using consecutive 1s.
#include <iostream>
using namespace std;
void Binarystring(int n, int lastplace,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        Binarystring(n-1,0,ans+'0');
        Binarystring(n-1,1,ans+'1');
    }else{
        Binarystring(n-1,0,ans+'0');
    }
}
int main(){
    string ans="";
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    Binarystring(n,0,ans);
    return 0;
}