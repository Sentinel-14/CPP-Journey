//Leetcode problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
//Best Time to Buy and Sell Stock 

#include <iostream>
using namespace std;
void maxprofit(int prices[],int n){
    int Bestbuy[100000];
    Bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        Bestbuy[i]=min(Bestbuy[i-1],prices[i]);

    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currprofit=prices[i]-Bestbuy[i];
        maxprofit=max(maxprofit,currprofit);
    }
    cout<<"Maximum profit is:"<<maxprofit<<endl;
}



int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxprofit(prices,n);
    return 0;
    }
