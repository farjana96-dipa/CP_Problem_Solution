#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i,tt,n,ans,ct,m,k;
    cin>>tt;
    while(tt--){
        cin>>n>>m>>k;
        string s;
        cin>>s;
        ans = 0;ct=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){            
                ct++;
                if(ct==m){
                    ans++;
                    ct=0;
                    i = i + (k-1);
                }
               
            }
            else if(s[i]=='1') ct=0;
        }
        cout<<ans<<endl;
    }
 
}