#include<bits/stdc++.h>
using namespace std;
vector<int>pre;


void preCal(){
    pre.push_back(1);
    for(int i=1,k=3;i<=10005;i++,k=k+2){
        int x = (2*k) + ((k-2)*2);
        pre.push_back(x);
    }
}



int main(){
    preCal();
    int i,sum,n,tt,j,ct;
    cin>>tt;
    while(tt--){
        cin>>n;
        int a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        sum = 0;ct=1,j=1;
        
        for(i=1;i<n;i++){
            sum = sum + a[i];

            if(sum==pre[j]){
            sum = sum - pre[j];
            ct++;j++;
            }

            else if(sum < pre[j]){
                i++;
                while(i<n && sum+a[i]<=pre[j]){
                    sum = sum + a[i];i++;
                }
                if(sum==pre[j]){
                    sum = sum - pre[j];
                    ct++;j++;i--;
                }
                else if(sum+a[i] > pre[j] && sum<pre[j]){
                    sum = sum+a[i];
                    while(sum>pre[j]){
                    sum = sum - pre[j];j++;
                     }
                    if(sum==pre[j]){
                        sum = sum - pre[j];
                        ct++;j++;
                    }
                    
                }
                
            }

            else if(sum > pre[j]){
                 while(sum>pre[j]){
                    sum = sum - pre[j];j++;
                }
                if(sum==pre[j]){
                    sum = sum - pre[j];
                    ct++;j++;
                }
            }
        }
        
        cout<<ct<<endl;
    }
}