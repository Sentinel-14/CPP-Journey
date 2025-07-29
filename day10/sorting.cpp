/*
BINARY SEARCH
It requires a sorted array to work.
Time Complexity: O(log n)
Space Complexity: O(1)  
*/

#include <iostream>
#include <algorithm>  // For sort() function
using namespace std;

// Method 1: Bubble Sort with detailed explanation
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        
        printArray(arr, n);
        
        // If no swapping happened, array is already sorted
        if(!swapped) {
            cout << "No swaps needed - array is sorted!" << endl;
            break;
        }
    }
    cout << "Sorting complete!" << endl;
}

// Method 2: Selection Sort (Manual Implementation)
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap minimum element with first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Binary Search Function (needs sorted array)
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    cout << "=== ARRAY SORTING METHODS ===" << endl;
    
    // Unsorted array
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    cout << "Original array: ";
    printArray(arr1, n);
    
    // Method 1: Bubble Sort
    cout << "\n--- Method 1: Bubble Sort ---" << endl;
    bubbleSort(arr1, n);
    cout << "Sorted array: ";
    printArray(arr1, n);
    
    // Method 2: Selection Sort
    cout << "\n--- Method 2: Selection Sort ---" << endl;
    selectionSort(arr2, n);
    cout << "Sorted array: ";
    printArray(arr2, n);
    
    // Method 3: Built-in sort() function
    cout << "\n--- Method 3: Built-in sort() ---" << endl;
    sort(arr3, arr3 + n);  // Most efficient!
    cout << "Sorted array: ";
    printArray(arr3, n);
    
    // Now test binary search on sorted array
    cout << "\n--- Binary Search Test ---" << endl;
    int key = 25;
    int result = binarySearch(arr1, n, key);
    if(result != -1) {
        cout << "Element " << key << " found at index: " << result << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }
    
    return 0;
}