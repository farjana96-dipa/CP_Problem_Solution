#include<bits/stdc++.h>
using namespace std;
vector<int>pre;



int main(){
   int tt,n,x,ans;
   cin>>tt;
   while(tt--){
       cin>>n;
      
       ans = 1; x = 1;
       while(x<n){
           ans++;
           x = (2*x) + 2;
       }
    
     cout<<ans<<endl;
      
   }
}