#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,tt,y,k,j;
    cin>>tt;
    while(tt--){
        cin>>n>>k;
       
        y=1;
        
        for(j=1,i=n;j<=n;i--,j++){
            if(j%k==0){
               cout<<y<<" ";
               if(y!=i) cout<<i<<" ";
               y++;j++;
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
}