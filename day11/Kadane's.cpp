/* 
Kadane's Algorithm is basically a dynamic programming a 
*/

#include <iostream>
using namespace std;
void maxsubarraysum(int arr[],int n){
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++){
        cout<<i<<" ";
        currentsum += arr[i];
        if(currentsum>maxsum){
            maxsum=currentsum;}
            if(currentsum<0){
                currentsum=0;
            }
        
    }
        cout<<"maximum subarray sum ="<<maxsum<<endl;
}
int main (){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxsubarraysum(arr,n);
    return 0;
}
