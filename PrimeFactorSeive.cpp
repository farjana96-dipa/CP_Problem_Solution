
// 
// It works well if the number is under or equal to 10^7 
// If the number is greater than 10^7 then it show memory limit or error
//

#include<bits/stdc++.h>
using namespace std;


#define Max 100001
vector<int>spf(Max+1, 1);

void seive(){
    spf[0]=0;
    for(int i = 2; i<=Max; i++){
        if(spf[i]==1){
            for(int j=i;j<=Max;j=j+i){
                if(spf[j]==1){
                    spf[j]=i;
                }
            }
        }
    }
}

vector<int>primeFactor(int x){
    
    vector<int>res;
    
    x = sqrt(x) + 1;
    
    while(x!=1){
        res.push_back(spf[x]);
        x = x/spf[x];
    }
    
    return res;
}

int main(){
    seive();
    int i,x,tt;
    cin>>tt;
    while(tt--){
        
        cin>>x;
    
        vector<int>v = primeFactor(x);
       
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
