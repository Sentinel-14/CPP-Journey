//Max Subarray Sum by Brute Force Method
#include <iostream>
using namespace std;
void maxsubarrysum(int arr[],int n){
    int maxsum=0;
    int a;int b;
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            int sum=0;
            for (int k=i;k<=j;k++){
                sum +=arr[k];
            }
            cout<<sum;
            if(j<n-1){
                cout<<" , ";
            }
            if(sum > maxsum){
                maxsum=sum;
                a=i;
                b=j;
            }
        }cout<<endl;
    }
    cout<<"Maximum subarray sum is:"<< maxsum<<endl;
    cout<<"subarray is:"<<endl;
    for(int i=a;i<=b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"from index"<<a<<" to "<<b<<endl;
}

int main (){    
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxsubarrysum(arr,n);
    return 0;
    
    
}