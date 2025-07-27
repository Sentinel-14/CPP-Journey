#include <iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){  // ✅ Fixed: Use == for comparison
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[]={2,4,6,8,10,12,14,16,18};
    int n = sizeof (arr)/sizeof (arr[0]);
    
    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Searching for 49 (not in array): " << linearsearch(arr,n,49) << endl;
    cout << "Searching for 6 (at index 2): " << linearsearch(arr,n,6) << endl;
    cout << "Searching for 18 (at index 8): " << linearsearch(arr,n,18) << endl;
    
    return 0;
}