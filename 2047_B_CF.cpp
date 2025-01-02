
// Sort the map according to value using compare function

#include<bits/stdc++.h>
using namespace std;


 bool compare(pair<char,int>&a, pair<char,int>&b){
     return a.second < b.second;
 }



int main(){
    int i,n,tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        string s;
        map<char,int>mp;
        mp.clear();
        cin>>s;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }   
        
       vector<pair<char,int>>v(mp.begin(),mp.end());
        
       sort(v.begin(),v.end(),compare);
       
       int len = v.size();
        
       char ch = v[0].first;
       char ch1 = v[len-1].first;
      
      for(i=0;i<n;i++){
          if(s[i]==ch){
              s[i]=ch1;
              break;
          }
      }
      
      cout<<s<<endl;
      v.clear();
    }
}
