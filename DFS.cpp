#include <bits/stdc++.h>
using namespace std;
vector<int>adj[105];
vector<bool>vis(105,0);

void dfs(int v){
    vis[v]=1;
    cout<<v<<" ";
    for(auto i: adj[v]){
        if(vis[i]==0){
            dfs(i);
        }
    }
}


int main() {
    int i,j,n;
    cin>>n;
    
    for(i=0;i<105;i++){
        vis[i]=0;
        adj[i].clear();
    }
    
    for(i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<"Output Array : ";
    
    dfs(1);

}
