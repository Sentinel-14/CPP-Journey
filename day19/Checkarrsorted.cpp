//Check if Array sorted

#include <iostream>
using namespace std;
bool check(int arr[],int n, int i  ){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return check(arr,n,i+1);

}
int main(){
    int arr[]={1,3,5,6,7,4};
    cout<<check(arr,6,0);
    return 0;
     
}