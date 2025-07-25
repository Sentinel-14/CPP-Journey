// To find the largest element in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,12};
    int largest = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    return 0;
}