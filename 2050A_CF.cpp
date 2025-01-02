#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt,m,sum,ct,n;
    cin>>tt;
    while(tt--){
        cin>>n>>m;
       vector< pair<int,string> >v;
        string s;
        while(n--){
            cin>>s;
            v.push_back({s.size(),s});
        }
        
        
        sum = 0; ct = 0;
        
       for(auto it: v){
           if(sum + it.first <= m){
                sum = sum + it.first;
                ct++;
           }
           else break;
           
        }

        cout<<ct<<endl;
        v.clear();
    }
}