//Arrays are passed by reference
/*#include <iostream>
using namespace std;

void func2(int* ptr){
   *ptr = 10;  // Actually modify the original variable
   cout << "Inside func2, changed value to: " << *ptr << endl;
}

void func(int arr[]){
   arr[0] = 29939;
}

int main(){
   int a = 1;
   int *ptr = &a;
   cout << "Initial value: " << *ptr << endl; // output will be 1
   
   func2(ptr); // ✅ Now passing the pointer

   cout << "After func2: " << *ptr << endl; // output will be 10!
   cout << "Variable a: " << a << endl; // output will be 10!
   
   // Array example - demonstrating pass by reference
   int arr[5] = {1, 2, 3, 4, 5}; // ✅ Fixed: added 'i' in 'int'
   cout << "Before func: " << arr[0] << endl; // Output will be 1
   
   func(arr);
   
   cout << "After func: " << arr[0] << endl; // Output will be 29939
   cout << "Using *arr: " << *arr << endl; // Output will also be 29939
   
   return 0;
}*/

#include <iostream>
using namespace std;

// Your idea: Try to calculate size inside function
void printArrayWithInternalSize(int arr[]) {
    int calculatedSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Calculated size inside function: " << calculatedSize << endl;
    cout << "sizeof(arr): " << sizeof(arr) << " bytes" << endl;
    cout << "sizeof(arr[0]): " << sizeof(arr[0]) << " bytes" << endl;
    cout << "This gives wrong result because arr is a pointer!" << endl;
}

// Alternative: Using sentinel values
void printArrayWithSentinel(int arr[]) {
    cout << "Using sentinel method: ";
    int i = 0;
    while(arr[i] != -1) {  // -1 is the end marker
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

// Alternative: Using global constant
const int GLOBAL_SIZE = 5;
void printArrayWithGlobal(int arr[]) {
    cout << "Using global constant: ";
    for(int i = 0; i < GLOBAL_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Alternative: Static array with size calculation
void printStaticArray() {
    static int staticArr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(staticArr) / sizeof(staticArr[0]);
    cout << "Static array size: " << size << " (This works!)" << endl;
    cout << "Static array elements: ";
    for(int i = 0; i < size; i++) {
        cout << staticArr[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << "=== TESTING YOUR IDEA: SIZE CALCULATION INSIDE FUNCTION ===" << endl;
    
    int myArray[5] = {1, 2, 3, 4, 5};
    
    cout << "Original array size in main: " << sizeof(myArray) << " bytes" << endl;
    cout << "Actual length: " << sizeof(myArray)/sizeof(myArray[0]) << endl;
    
    cout << "\n--- Your Idea: Calculate Size Inside Function ---" << endl;
    printArrayWithInternalSize(myArray);
    
    cout << "\n--- Alternative 1: Sentinel Values ---" << endl;
    int sentinelArray[] = {1, 2, 3, 4, 5, -1};  // -1 marks end
    printArrayWithSentinel(sentinelArray);
    
    cout << "\n--- Alternative 2: Global Constant ---" << endl;
    printArrayWithGlobal(myArray);
    
    cout << "\n--- Alternative 3: Static Array ---" << endl;
    printStaticArray();
    
    cout << "\n--- Conclusion ---" << endl;
    cout << "Your idea doesn't work for passed arrays because:" << endl;
    cout << "1. Array parameter becomes a pointer" << endl;
    cout << "2. sizeof(pointer) gives pointer size, not array size" << endl;
    cout << "3. Size information is lost when array is passed" << endl;
    
    return 0;
}
/* Basically the problem with passing array to fuction is that 
it becomes a pointer after passing, so when we try to calcutlate
it's size we get the size of pointer which is 8 bytes for 64-bit 
operating system(8bytes =64 bits) and not the actual size of array 
. So we need to use some other methods to get the size of array by 
passing it along with array like "calling- fun(arr,7)  and receiving-
int func(int arr[], int size)" or using global constant or static array
inside function. */
