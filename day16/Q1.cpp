/*
WAF to clear the range of bits from i to j in a given number.(i and j are counted backwards from thr right end of the number )
Exmaples:
input: num=15,i=1,j=3
output:1
Explanation:
15 in binary form is => 00001111 [i=1st and j=3rd bit underlined ]
After bits are cleared , number will become 00000001
Input: num=31, i=1,j=3
Output:17
Note: Think what type of bit mask is needed. It can also be a combination of 2 numbers.
*/
#include <iostream>
using namespace std;
int clearbits(int num, int i, int j){
    int bitmask=~0<<j;
    bitmask=~bitmask<<i;

    return num &~bitmask;

}
int main(){
    int num, i, j;
    cin>>num>>i>>j;
    cout<<clearbits(num,i,j)<<endl;
    return 0;
}