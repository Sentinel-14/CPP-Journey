//For a given integer array of size N. You have to find all the occurences (indices) of a given element (Key) and print them. Use a recursive function to solve this problem.
#include <iostream>
#include <string>
using namespace std;
void  occurences(int arr[], int n,int i, int key){
    if(i==n){
        return;
    }    
    if(arr[i]==key){
        cout<<i<<" ";
    }
    occurences(arr,n,i+1,key);
}


int main(){ 
   int arr[]={3,2,4,5,6,2,7,2,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key;
   cout<<"Enter the Key:";
   cin>>key;
   occurences(arr,n,0,key);
   return 0; 
}