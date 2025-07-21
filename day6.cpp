/*

//Nested loop
#include<iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }return 0;
}


//Star pattern
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Inverted Star pattern
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for (int i=N;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
     }
   return 0;   
}

//Half pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for (int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
//Character pyramid
#include <iostream>
using namespace std;
int main(){
     int N;
     cout<<"Enter a number:";
     cin>>N;
     char a='A';
     for (int i=1;i<=N;i++){
        for (int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;

     }
     return 0;
}


//Hollow Rectangle 
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        cout<<"*";
        for(int j=1;j<=N-1;j++){
        if(i==1||i==N)
        {
            cout<<"*";
        }else
        {
          cout<<" ";
        }
    }
        
    cout<<"*"<<endl; 
    }
    return 0;

}
//Inverted and rotated Half pyramid
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++){
            cout<<" ";//spaces
        }
        for(int k=1;k<=i;k++){
            cout<<"*";//stars
        }
        cout<<endl;
    }
    return 0;
}
//Floyd's Triangle
#include <iostream>
using namespace std;
int main(){
    int N;
    int M=1;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<M<<" ";
            M++;
        }
        cout<<endl;
         
    }
    return 0;
}
// Diamond pattern
#include <iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter the number:";
    cin>>N;
    for(int i=1;i<=N;i++ ){
        for (int j=1;j<=N-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i=N;i>=1;i--){
        for(int j=1;j<=N-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//butterfly pattern
#include <iostream>
using namespace std;
int main () {
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(N-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=N;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(N-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Print the 0-1 pattern 
#include <iostream>
using namespace std;
int main(){
    int N;
    bool x=true;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=0;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x=!x;
        }
        
        cout<<endl;
    }
    return 0;
}

//Print The Rhombus Pattern.
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=N;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Print The Palindromic pattern
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/