#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt,n,m,k,x1,x2,ans,t1,t2,d;
	cin>>tt;
	while(tt--){
	    cin>>n>>m>>k;
	    cin>>t1>>t2;
	    cin>>d;
	    if(t1>t2) swap(t1,t2);
	    if(d>t1 && d>t2){
	        x1 = d - t1;
	        x2 = d - t2;
	        
	        if(x1<x2){
	            ans = n-t1;
	        }
	        else{
	            ans = n-t2;
	        }
	    }
	    else if(d<t1 && d<t2){
	        x1 = t1 - d;
	        x2 = t2 - d;
	        if(x1==1) ans = 1;
	       else if(x1<x2){
	            ans = t1-1;
	        }
	        else{
	            ans = t2 - 1;
	        }
	    }
	    else{
	        ans = t2 - t1 - 1;
	    }
	    cout<<ans<<endl;
	}

}
