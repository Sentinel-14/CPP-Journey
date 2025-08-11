/* 
Binary Search in a 2D Matrix.
This approach treats the 2D matrix as a 1D sorted array and applies binary search.
Requirements: Matrix must be sorted row-wise and column-wise.
Time Complexity: O(log(m*n)) where m = rows, n = columns
Space Complexity: O(1)

Note: Also includes Staircase Search method with O(m+n) complexity.
*/

#include <iostream>
using namespace std;

bool binarySearch2D(int matrix[][100], int rows, int cols, int key) {
    int start = 0;
    int end = rows * cols - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        // Convert 1D index back to 2D coordinates
        int row = mid / cols;
        int col = mid % cols;
        int midElement = matrix[row][col];
        
        if (midElement == key) {
            cout << "Key found at (" << row << ", " << col << ")\n";
            return true;
        } 
        else if (midElement < key) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return false;
}

// Staircase Search Method (starts from top-right corner)
bool staircaseSearch(int matrix[][100], int rows, int cols, int key) {
    int i = 0, j = cols - 1;
    
    while (i < rows && j >= 0) {
        if (matrix[i][j] == key) {
            cout << "Key found at (" << i << ", " << j << ")\n";
            return true;
        } 
        else if (matrix[i][j] > key) {
            j--;  // Move left
        } 
        else {
            i++;  // Move down
        }
    }
    return false;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns (max 100): ";
    cin >> rows >> cols;

    int matrix[100][100];
    cout << "Enter elements of the matrix (sorted row-wise and column-wise):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    cout << "\n--- Using Binary Search Method ---\n";
    bool found1 = binarySearch2D(matrix, rows, cols, key);
    if (!found1) {
        cout << "Key not found using Binary Search.\n";
    }

    cout << "\n--- Using Staircase Search Method ---\n";
    bool found2 = staircaseSearch(matrix, rows, cols, key);
    if (!found2) {
        cout << "Key not found using Staircase Search.\n";
    }

    return 0;
}