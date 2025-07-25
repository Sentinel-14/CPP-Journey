// To find the largest element in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,12};
    int largest = arr[0];
    int min = arr[0];
    // Initialize largest with the first element of the array
    for(int i = 1; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << min << endl;
    return 0;
}