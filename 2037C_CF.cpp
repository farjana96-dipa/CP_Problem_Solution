#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt,n,i,j,k;
    cin>>tt;
    while(tt--){
        
        cin>>n;
        if(n<=4){
            cout<<"-1\n";
        }
        else{
            vector<int>ev,odd;
            
            int mid = n/2;
            
            if(n%2==1){
                odd.push_back(5);
                for(i=0,j=n,k=n-1;i<=mid;i++,j=j-2,k=k-2){
                   if(j!=5) odd.push_back(j);
                   if(k!=4 && k!=0) ev.push_back(k);
                }
                ev.push_back(4);
            }
            else{
                odd.push_back(5);
                 for(i=0,j=n-1,k=n;i<mid;i++,j=j-2,k=k-2){
                   if(j!=5) odd.push_back(j);
                   if(k!=4) ev.push_back(k);
                }
                ev.push_back(4);
            }
                
                
                
           
           for(i=0;i<ev.size();i++) cout<<ev[i]<<" ";
           
           for(i=0;i<odd.size();i++) cout<<odd[i]<<" ";
           cout<<endl;
           
        }
    }
}
