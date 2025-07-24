/*Array is a linear collection of same types of elements that are 
store together in contiguous memory spaces. */
/*Creating an array
  int marks[5]; // Declaration
  marks[0] = 85; // Initialization
  marks[1] = 90;
  marks[2] = 78;
  marks[3] = 88;
  marks[4] = 92;
etc
int marks []={85, 90, 78, 88, 92};
Memory is statically allocated (at compile time)

To print the size of an array , we can use the sizeof operator.
  cout << sizeof(marks) / sizeof(marks[0]) << endl; // Outputs: 5
*/
//to print the elelments of an array
#include <iostream>
using namespace std;        

int main() {
    int marks[10] ;
    int size = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < size; i++) {
        cout << "Enter marks for student " << (i + 1) << ": ";
        cin >> marks[i];
    }
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    return 0;
}
