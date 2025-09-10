// Tiling problem
// Count total ways to tile a floor (2xn) with tiles (2x1).
#include <iostream>
#include <string>
using namespace std;
int tilingproblem(int n){
    if(n==0|| n==1){
        return 1;
    }
    int ans1=tilingproblem(n-1);
    int ans2=tilingproblem(n-2);
    return ans1+ans2;
}

int main(){
    int n;
    cin>>n;
    cout<<tilingproblem(n)<<endl;
    return 0;
}