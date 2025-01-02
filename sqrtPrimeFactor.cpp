


//If the number is 10^9 and don't need precomputation or range primefactor
// then we can use this sqrtPrimeFactor Method.


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
        
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}