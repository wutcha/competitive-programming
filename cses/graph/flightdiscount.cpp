#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;
    vector<vector<pair<ll,int>>> adj(n+1);
    priority_queue<pair<ll,pair<int,int>>, vector<pair<ll,pair<int,int>>>, greater<pair<ll,pair<int,int>>>> pq;

    for(int i = 0; i < m; i++){
        int a,b; ll c;
        cin>>a>>b>>c;
        adj[a].push_back({c,b});
    }

    vector<vector<ll>> t(n+1,vector<ll>(2,1e15));

    pq.push({0,{1,0}});
    t[1][0] = 0;
    t[1][1] = 0;
    

    while(!pq.empty()){
        auto cur = pq.top();
        pq.pop();

        int b = cur.second.first;
        ll time = cur.first;
        int state = cur.second.second;
        if(time>t[b][state]) continue;
        if(b==n&&state==1){
            cout<<time;
            break;
        }
        for(auto& i: adj[b]){
            ll cost = i.first;
            int to = i.second;

            if(t[b][state]+cost < t[to][state]){
                t[to][state] = t[b][state]+cost;
                pq.push({t[to][state],{to,state}});
            }

            if(state==0&&t[b][0]+cost/2<t[to][state+1]){
                t[to][1]=t[b][0]+cost/2;
                pq.push({t[to][1],{to,1}});
            }
        }
    }
    return 0;
}