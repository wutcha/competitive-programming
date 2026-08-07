#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<vector<int>> adj;
vector<int> leaf;
bool valid;

pair<int,int> dfs(int cur){
    if(!valid) return {0,0};
    if(adj[cur].size()==0){
        return {leaf[cur],leaf[cur]};
    }
    int mn = INT_MAX;
    int mx = 0;
    int inv = 0;
    pair<int,int> prev={-1,-1}, first = {-1,-1};
    for(int i: adj[cur]){
        auto p = dfs(i);
        mx = max(mx,p.second);
        mn = min(mn,p.first);
        if(prev.first!=-1&&prev.second>=p.first){
            inv++;
            if(inv>1){
                valid = false;
                break;
            }
        }
        if(first.first==-1) first = p;
        prev = p;
    }
    if(prev!=first&&prev.second>=first.first) inv++;
    if(inv>1){
        valid = false;
    }
    return {mn,mx};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        adj = vector<vector<int>>(n+1,vector<int>());
        leaf = vector<int>();\
        valid = true;
        leaf.push_back(0);
        for(int i = 2; i <= n; i++){
            int a; cin>>a;
            adj[a].push_back(i);
        }
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            leaf.push_back(a);
        }
        dfs(1);
        cout << (valid?"YES":"NO")<<nl;
        
    }

    return 0;
}