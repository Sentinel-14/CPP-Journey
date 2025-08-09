// Diagonal sum  of a Square Matrix n*n
// If n is even then there the code is simple
// But is n is odd we have to take care if central element because it will add in both both diagonal sum.

#include<iostream>
using namespace std;

void Diagonalsum(int matrix[][3],int n){
    int pd=0,sd=0;
    for(int i=0;i<n;i++){
        pd += matrix[i][i];
        if(i!=n-i-1){
        pd+= matrix[i][n-i-1];
        }
        }
        cout<<pd;

    }



int main() {
    int matrix1[4][4]={{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix2[3][3]={{1,2,3}, {4,5,6} , {7,8,9}};
    Diagonalsum(matrix2,3);
    return 0;


}