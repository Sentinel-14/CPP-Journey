/*
Write a program to update the ith  bit in a number, according to the given value (o or 1)


*/

#include <iostream>
using namespace std;

int update(int num, int i , int val){
    num = num&~(1<<i);
    num = num|(val<<i);
    return num;
}
int main (){
    cout<< update(7,2,0) << endl;

   
}