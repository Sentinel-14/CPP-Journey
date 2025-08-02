//Trapping Rain Water problem from leetcode hard level

#include <iostream>
using namespace std;
int trap(int *height,int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0]=height[0];
    rightMax[0]=height[n-1];
    //cout<<leftMax[0];\
    //For Left max
    for (int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);
       
    }
    //For right max 
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i+1]);
      //  cout<<rightMax[i]<<",";
    }
    cout<<endl;
    int watertrapped=0;
    for(int i=0;i<n;i++){
        int currwater=min(leftMax[i],rightMax[i])-height[i];
        watertrapped += currwater;
    }
    cout<<"Water trapped = "<<watertrapped<<endl;
    return watertrapped;
}


int main() {
    int height[7]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
    trap(height,n);
    return 0;
}