// Clear i th bit 
#include <iostream>
using namespace std;
int Clearithbit(int n, int i) {
    int mask = ~(1 << i);
    return n & mask;
}