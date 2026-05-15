#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool yes = true;

vector<vector<int>> adj;
vector<int> v;

void dfs(int i, int val){
    if(v[i]!=0){
        if(v[i]!=val){
            yes = false;
        }
        return;
    }
    v[i] = val;
    for(auto j : adj[i]){
        dfs(j,3-val);
        if(!yes) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;
    adj = vector<vector<int>>(n+1);
    v = vector<int>(n+1);
    for(int i = 0; i < m; i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i<= n; i++){
        if(v[i]==0){
            dfs(i,1);
        }
    }

    if(!yes) cout<<"IMPOSSIBLE";
    else{
        for(int i = 1; i<=n;i++) cout<<v[i]<<" ";
    }

    return 0;
}