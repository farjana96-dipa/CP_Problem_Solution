#include<bits/stdc++.h>
using namespace std;

vector<int>primeFactor(int x){
    
    vector<int>res;

    while(x%2==0){
        res.push_back(2);
        x=x/2;
    }

    for(int i=3;i<=sqrt(x);i=i+2){
        while(x%i==0){
            res.push_back(i);
            x=x/i;
        }
    }
    if(x>2) res.push_back(x);
    return res;
}

int main(){
    int tt,i,j,n;
    cin>>tt;
    while(tt--){
        cin>>n;
        vector<int>v = primeFactor(n);
        auto it = find(v.begin(),v.end(),3);
        auto it2 = find(v.begin(),v.end(),11);
        if(it!=v.end() && it2!=v.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}