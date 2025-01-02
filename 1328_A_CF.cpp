#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    int a,b,res;
    cin>>tt;
    while(tt--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else if(a<b){
            cout<<(b-a)<<endl;
        }
        else{
            res = (((a/b ) + 1 ) * b);
            res = res - a;
            cout<<res<<endl;
        }
    }
    return 0;
}