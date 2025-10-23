//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than (n/2)times.You may assume that the majority element always exists int eh array.
#include <iostream>
#include <algorithm>
using namespace std;
void melement(int nums[], int n,int arr[],int m,int i){
    if(i==n){
        return ;
    }
    arr[nums[i]]++;
    melement(nums,n,arr,m,i+1);
}
int main(){
    int nums[]={3,2,3};
    int n= 3; 
    sort(nums, nums+n);
    int m= nums[n-1]+1;
    int arr[m]={};
    melement(nums,n,arr,m,0);
    int x=INT_MIN,res=INT_MIN;
    for(int i=0;i<m;i++){
        if(arr[i]>x){
            res=i;
            x=arr[i];
        }
    }
    cout<<res<<endl;


}