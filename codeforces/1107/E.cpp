#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<vector<int>> adj;
vector<ll> val;
set<int> psq;

ll ret;
ll n;

ll dfs(int cur, int parent){
    if(adj[cur].size()==1&&adj[cur][0]==parent) return 1;
    if(psq.count(val[cur])!=0){
        ll s1 = 0, s2 = 0, s3 = 0;
        for(auto i: adj[cur]){
            if(i==parent) continue;
            ll s = dfs(i,cur);
            s3 += s*s2;
            s2 += s*s1;
            s1 += s;
        }
        ll sf = n-s1-1;
        s3+=sf*s2;
        s2+=sf*s1;

        ret += s3+s2;
        return s1 + 1;
    }else{
        ll size = 0;
        for(auto i: adj[cur]){
            if(i==parent) continue;
            size+=dfs(i,cur);
        }
        return size+1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 1; i*i<1000000; i++){
        psq.insert(i*i);
    }

    int t; cin>>t;
    while (t--) {
        cin>>n;
        ret = 0;
        adj = vector<vector<int>>((int)n+1,vector<int>());
        val = vector<ll>((int)n+1);
        for(int i = 1; i <= n; i++) {
            cin>>val[i];
        }
        for(int i = 0; i < n-1; i++){
            int a,b; cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1,0);
        cout << ret << nl;

    }

    return 0;
}