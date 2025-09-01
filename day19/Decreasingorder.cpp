// Print numbers in decreasing order
 
// #include <iostream>
// using namespace std;
// int DecreasingOrder(int n){
//     if(n==0){
//         cout<<0;
//         return 0;
//     }
//     cout<<n<<",";
//     return DecreasingOrder(n-1);
// }
// int main(){
//     DecreasingOrder(100);
//     return 0;
// }

// OR

#include <iostream>
using namespace std;
void DO(int n){
    if(n==0){
        cout<<n;
        return;
    }
    cout<<n<<",";
    DO(n-1);
}
int main (){
    DO(100);
    return 0;
}