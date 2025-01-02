#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,ct,tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        int a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        ct = 0;
        for(i=0;i<n;i++){
            if(a[i]>0){
                ct++;
                while(a[i]>0){
                    i++;
                }
                
                i--;
            }
        }
        
        if(ct==0) cout<<0<<endl;
        else if(ct == 1) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
