#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<vector<int>> adj;

ll ret = 0;

int dfs(int cur){
    ret++;
    if(adj[cur].empty()){
        return 1;
    }else if(adj[cur].size()==1){
        return dfs(adj[cur][0])+1;
    }else{
        int mx2 = dfs(adj[cur][0]);
        int mx = dfs(adj[cur][1]);
        if(mx2>mx) swap(mx2,mx);
        for(int i = 2; i < adj[cur].size(); i++){
            int d = dfs(adj[cur][i]);
            if(d>mx){
                mx2 = mx;
                mx = d;
            }else if(d>mx2){
                mx2 = d;
            }
        }
        ret+=mx2;
        return mx + 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ret = 0;
        int n; cin>>n;
        adj = vector<vector<int>>(n+1,vector<int>());
        for(int i = 2; i <= n; i++){
            int a; cin>>a;
            adj[a].push_back(i);
        }
        int d = dfs(1);
        cout<<ret<<nl;
    }

    return 0;
}