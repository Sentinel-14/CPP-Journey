//Spiral matrix traversal. 

#include <iostream>
using namespace std;
void spiralmatrix(int Matrix[][4],int n,int m){
     int srow=0,scol=0,erow=n-1,ecol=m-1;
     while(srow<=erow&&scol<=ecol){
        //Top
        for(int j=scol;j<=ecol;j++){
            cout<<Matrix[srow][j]<<" ";
        }

        //Right
        for(int i=srow+1;i<=erow;i++ ){
            cout<<Matrix[i][ecol]<<" ";
        }

        //Bottom
        for(int j=ecol-1;j>=scol;j--){
            if(erow==srow){
                break;
            }
            cout<<Matrix[erow][j]<<" ";
        }

        //Left
        for(int i=erow-1;i>srow;i--){
            if(scol==ecol);
            cout<<Matrix[i][scol]<<" ";
        }

        srow++;scol++;erow--;ecol--;



     }

     cout<<endl;

}


int main(){
    int Matrix1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int Matrix2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    spiralmatrix(Matrix1,4,4);

    spiralmatrix(Matrix2,3,4);

return 0;
}