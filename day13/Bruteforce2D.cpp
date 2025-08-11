/*
Search in a 2D-Array or matrix.
First one and the most simple is Brute force approach.
In this we use a Key and the compare it with every element in the matrix.
*/

#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                found = true;
                cout << "Key found at (" << i << ", " << j << ")\n";
            }
        }
    }

    if (!found) {
        cout << "Key not found in the matrix.\n";
    }

    return 0;
}