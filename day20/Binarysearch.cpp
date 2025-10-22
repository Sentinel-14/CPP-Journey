//Write a recursive function to perform Binary Search.
#include<iostream>
using namespace std;
int binarysearch(int arr[],int start, int end, int key){
    if(start>end) return -1;
    int mid=(start+end)/2;
    if(arr[mid]==key){ return mid;}
    else if(arr[mid]>key){
        return binarysearch(arr,start,mid,key);
    }else{
        return binarysearch(arr,mid,end,key);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int key;
    int start=0;
    int end= n;
    cout<<"Enter the key";
    cin>>key;
    cout<<binarysearch(arr,start,end,key);
    return 0;
    
}