#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt,n,i,j;
	cin>>tt;
	while(tt--){
	    cin>>n;
	    if(n==1 || n==3) {
	        cout<<"-1\n";
	    }
	    else if(n%2==0){
	        string s = "";
	            for(i=0;i+2<n;i++){
	                s = s + "3";
	            }
	             s = s+ "66";
	            cout<<s<<endl;
	    }
	   else{
	          string s = "";
	         
	           for(i=0;i+5<n;i++){
	                    s = s + "3";
	           }
	           s = s + "36366";
	           cout<<s<<endl;
	        }
	}

}
