//Print Subarrays
  #include <iostream>
  using namespace std;
  void printsubarray(int arr[], int n){
    for (int i=0;i<n;i++){
      for(int j=i;j<n;j++){
      //  cout<<"["<<i<<","<<j<<"] ";
        for (int k=i;k<=j;k++){
          cout<<arr[k];
        }
        if(j<n-1){
          cout<<" , ";
        }
      }cout<<endl;
      
    }
  }


  int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
    return 0;
  }
  //Time complexity is O(n^3) and it can be reduced 
  // to O(n^2) by using stringstream or vector.