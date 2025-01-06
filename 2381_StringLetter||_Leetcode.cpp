#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j,st,end,d,x,n;
    string s;
    cin>>s;
    vector<vector<int>>shifts;
    cin>>n;
    for(i=0;i<n;i++){
        vector<int>b;
        for(j=0;j<3;j++){
            cin>>x;
            b.push_back(x);
        }
        shifts.push_back(b);
    }
	
	for(i=0;i<shifts.size();i++){
	    
        st = shifts[i][0];
        end = shifts[i][1];
        d = shifts[i][2];
        
        if(d==1){
            for(j=st;j<=end;j++){
                if(s[j]=='z'){
                    s[j] = 'a';
                }
                else{
                    s[j] = s[j] + 1;
                }
            }
        }
        else{
           for(j=st;j<=end;j++){
                if(s[j]=='a'){
                    s[j] = 'z';
                }
                else{
                    s[j] = s[j] - 1;
                    //cout<<s[j];
                }
            }
        }
    }
    
    cout<<s<<endl;
}
