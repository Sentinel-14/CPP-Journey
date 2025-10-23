//Apply merge sort to sort an array of Strings.(Assume that all the characters in all the Strings are in Lowercase).
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void merge(string arr[],int si,int mid,int ei){
     vector<string>temp;
     int i=si;
     int j= mid + 1;
     while(i<=mid && j<=ei){
        string x=arr[i];
        string y=arr[j];
        int a=0;
        while(a<x.size() && a<y.size()){
            if(x[a]==y[a]){
                a++;
                if(a==x.size() && x.size()<y.size()){
                    temp.push_back(x);
                    ++i;
                    break;
                }else if (a== y.size() && y.size()<x.size()){
                    temp.push_back(y);
                    ++j;
                    break;
                }else{

                    temp.push_back(x);
                    ++i;
                    temp.push_back(y); 
                    ++j;
                    break;
                }
                
            }
            else if(x[a]<y[a]){
                temp.push_back(x);
                ++i;
                break;
            }else{
                temp.push_back(y);
                ++j;break;
            }
        }
       
     } while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=ei){
            temp.push_back(arr[j++]);
        }
        for(int idx=si,q=0;idx<=ei;idx++){
            arr[idx]=temp[q++];
        }  
}

void mergesort(string arr[], int si,int ei){
     if(si>=ei){
        return;
     }
     int mid= si+(ei-si)/2;
     //Left
     mergesort(arr,si,mid);
     //Right
     mergesort(arr,mid+1,ei);
     merge(arr,si,mid,ei);
}


int main(){
    string arr[]= {"sun","earth","mars","mercury"};
    int n= sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    // string a= arr[0];
    // int m= a.size();
    // cout<<m<<endl;/
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}