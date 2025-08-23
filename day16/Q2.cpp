/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space .
Hint: Think XOR
*/
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
        

    }
    cout<<ans;
    return 0;


}