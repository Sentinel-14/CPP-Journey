//Last Occurence
//WAF to find last occurence of an element in a vector.

#include <iostream>
#include <vector>
using namespace std;
int LO(vector<int>arr, int target,int i){
    if (i==arr.size()){
        return -1;
    }
    int idxfound=LO(arr,target,i+1);
    if(idxfound==-1 && arr[i]==target){
        return i;
    }
    return idxfound;
}
int main(){
    vector<int>arr={1,2,3,3,3,4};
    cout<<LO(arr,3,0);
    return 0;
}
 