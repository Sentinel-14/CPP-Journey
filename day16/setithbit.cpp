// Set i th bit 
#include <iostream>
using namespace std;

int main() {
    int n = 5; // 0101
    int i = 1;
    int mask = 1 << i;
    n = n | mask;
    cout << n << endl; // 0111
    return 0;
}