//Count set bits
#include <iostream>
using namespace std;
int count(int num){
    int count=0;
    while(num>0){
        int lastdigit=num&1;
        count+=lastdigit;
        num=num>>1;
    }return count;
}
int main(){
    int num;
    cin>>num;
    cout<<count(num)<<endl;
    return 0;

}