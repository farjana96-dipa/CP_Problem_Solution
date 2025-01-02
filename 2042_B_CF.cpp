#include<bits/stdc++.h>
using namespace std;
vector<int>pre;

bool compare(pair<int,int>&a ,pair<int,int>&b){
    return a.second < b.second;
}


int main(){
   int i,cnt,tt,n,x,j;
   cin>>tt;
   while(tt--){
       cin>>n;
       map<int,int>mp;
       mp.clear();
       for(i=0;i<n;i++){
           cin>>x;
           mp[x]++;
       }
       
       vector<pair<int,int>>v(mp.begin(),mp.end());
       sort(v.begin(),v.end(),compare);
      
       
       int ans = 0;
       for(cnt=1,j=0;j<v.size();cnt=cnt+1,j++){
           
                if(v[j].second==1 && cnt%2==1) ans = ans + 2;
                else if(v[j].second > 1) ans = ans +1;
                
       }
       cout<<ans<<endl;
       v.clear();
   }
}