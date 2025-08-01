#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int s=0;
	    
	    if(X > Y) {
	        cout << -1 << endl; // Impossible case
	    } else {
	        while (X!=Y){
	            X=X+2;
	            Y=Y+1;
	            s++;
	        }
	        cout<<s<<endl;
	    }
	}

}





