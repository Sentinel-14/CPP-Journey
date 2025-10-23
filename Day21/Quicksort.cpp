// Quick sort 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[], int si, int ei){
    int i=si-1;
    int pivot= arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
void Quicksort(int arr[],int si, int ei ){
    if(si>=ei){
        return;
    }
    int pidx=partition(arr,si,ei);
    Quicksort(arr,si,pidx-1);//left
    Quicksort(arr,pidx+1,ei);
}
int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    Quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}