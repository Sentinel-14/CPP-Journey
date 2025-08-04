/*
    * This file is part of a C++ project that demonstrates various sorting algorithms.
    * The project uses the C++17 language standard version.
    * 
    * The code includes implementations for:
    * 1. Bubble Sort
    * 2. Selection Sort
    * 3. Insertion Sort
    * 4. Counting Sort
    * 5. Built-in sort() function (from the <algorithm> header)
    * 
    * Each sorting method is demonstrated with an example array.

*/

#include <iostream>
#include <algorithm>
using namespace std;

//To print an array.
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1){
            cout<<",";
        }
    }cout<<endl;
}
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

//Method 1: Using Bubble sort
void Bubblesort(int arr[],int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//Method 2:Using Selection sort
void Selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int Index=i;
        for (int j=i+1;j<n;j++){
            if(arr[Index]>arr[j]){
                Index=j;
            }
        }
        if(Index!=i){
            swap(arr[Index],arr[i]);
        }
    }
}

//Method 3: Using Insertion sort
void Insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while((j>=0)&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

//Method 4: Using Counting sort
void Countingsort(int arr[],int n){
    int freq[100000];
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
        freq[arr[i]]++;
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        } 
    }
}


int main(){
    int arr1[]={1,6,3,7,4,8,2,4,5,5};
    int arr2[]={1,6,3,7,4,8,2,4,5,5};
    int arr3[]={1,6,3,7,4,8,2,4,5,5};
    int arr4[]={1,6,3,7,4,8,2,4,5,5};
    int arr5[]={1,6,3,7,4,8,2,4,5,5};
    int n=10;

    //Method:1 Bubble sort
    Bubblesort(arr1,n);
    cout<<"\nSorted array1: ";
    print(arr1,n);

    //Method:2 Selection sort
    Selectionsort(arr2,n);
    cout<<"\nSorted array2: ";
    print(arr2,n);

    //Method:3 Insertion sort
    Insertionsort(arr3,n);
    cout<<"\nSorted array3: ";
    print(arr3,n);

    //Method:4 Counting sort
    Countingsort(arr4,n);
    cout<<"\nSorted array4: ";
    print(arr4,n);



return 0;
}

