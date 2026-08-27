#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<int> cams;

int dfs(vector<vector<int>>& adj, vector<bool>& cam, int cur){
    if(adj[cur].size()==0){
        return cam[cur];
    }
    int need = 1-cam[cur];
    bool any = cam[cur];
    for(auto i: adj[cur]){
        int d = dfs(adj, cam, i);
        if(d){
            if(need) need--;
            else{
                cams.push_back(i);
            }
            any = true;
        }
    }
    return any;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        cams = vector<int>();
        int n; cin>>n;
        vector<vector<int>> adj(n+1,vector<int>());
        for(int i = 2; i<= n;i ++){
            int a; cin>>a;
            adj[a].push_back(i);
        }
        vector<bool> cam(n+1,false);
        int m; cin>>m;
        for(int i = 0; i < m; i++){
            int a; cin>>a;
            cam[a]=true;
        }
        dfs(adj,cam,1);
        cout<<cams.size()<<" ";
        for(auto i: cams) cout<<i<<" ";
        cout<<nl;

    }

    return 0;
}