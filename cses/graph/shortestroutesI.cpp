#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<vector<pair<ll,int>>> v;
vector<ll> t;
vector<bool> visited;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin>>n>>m;
    t.resize(n+1);
    v.resize(n+1);
    visited.resize(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        ll c;
        cin>>a>>b>>c;
        v[a].push_back({c,b});
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        pair<ll,int> cur = pq.top();
        pq.pop();
        if(visited[cur.second]) continue;
        t[cur.second]=cur.first;
        visited[cur.second] = true;
        for(auto i: v[cur.second]){
            pq.push({i.first+cur.first,i.second});
        }
    }
    for(int i = 1; i<=n; i++) cout<<t[i]<<" ";



    return 0;
}