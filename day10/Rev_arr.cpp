/*
REVERSE AN ARRAY
In this code, we will reverse an array .
There are two approaches to reverse an array :
1. Using a another temporary array(with extra space)
   - It means we will apply a for loop and run the array backward and store 
    the values in a new array which is in forward loop.
   - After that we will copy the new array to the original array.
2. In-place reversal (without using extra space)

   - In this approach, we will use two pointers, one starting from the beginning of the array and the other from the end.
   - We will swap the elements at these two pointers and move the pointers towards each other until they meet in the middle.

*/
/*
//with extra space
#include <iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,9,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];

    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }
    cout<< "Reversed array with extra space: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }   
return 0;
}
*/

//without extra space
#include <iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end=n-1;
    while (start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed array without extra space:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
