#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

queue<int> q;
vector<int> v;
vector<vector<int>> adj;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin>>n>>m;
    v = vector<int>(n+1);
    adj = vector<vector<int>>(n+1);

    for(int i = 0; i < m; i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    q.push(1);
    bool found = false;
    int pos = 1;
    vector<int> ret;
    while(!q.empty()){
        int s = q.size();
        while(s--){
            int cur = q.front();
            q.pop();
            if(v[cur]!=0) continue;
            //cout<<cur<<nl;
            v[cur] = pos;
            if(cur==n){
                found = true;
                int p = cur;
                cout<<pos<<nl;
                ret.push_back(cur);
                while(v[p]!=1){
                    for(auto i: adj[p]){
                        if(v[i]==v[p]-1) {
                            ret.push_back(i);
                            p = i;
                            break;
                        }
                    }
                }
                break;
            }
            for(auto i: adj[cur]) q.push(i);
        }
        if(found) break;
        pos++;
    }
    if(!found) cout<<"IMPOSSIBLE";
    else{
        reverse(ret.begin(),ret.end());
        for(auto i: ret) cout<<i<<" ";
    }

    return 0;
}