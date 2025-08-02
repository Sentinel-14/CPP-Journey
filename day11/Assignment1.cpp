/*
Given an integer array nums, return true if any value
appears at least twice in the array, and return false 
if every element is distinct.
Examples:
Input:nums={1,2,3,4}
output:false

Input:nums={1,1,1,3,3,4,3,4,2}
output:True
*/
#include <iostream>
#include<algorithm>
using namespace std;
bool check(int nums[],int n){
    sort(nums,nums+n);
    for (int i=0;i<n;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;

}
int main (){
    int nums[]={1,1,3,4,3,2,1,4,2,4,5,3,2};
    int n=sizeof(nums)/sizeof(int);
    if(check(nums,n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}