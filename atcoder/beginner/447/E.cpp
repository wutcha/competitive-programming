#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

ll mod = 998244353;

struct DSU{
    vector<int> parent, size;
    int components;

    DSU(int n){
        parent.resize(n);
        size.assign(n,1);
        components = n;
        for(int i = 0; i < n; i++) parent[i]=i;
    }
    int root(int i){
        if(parent[i]==i) return i;
        return parent[i] = root(parent[i]);
    }
    bool merge(int x, int y){
        
        int rx = root(x);
        int ry = root(y);
        if(size[rx]<size[rx]) return merge(ry,rx);
        if(rx==ry) return false;
        if(components==2) return true;
        size[rx]+=size[ry];
        parent[ry] = rx;
        components--;
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin >>n>>m;
    DSU d(n);
    vector<ll> add(m);
    vector<pair<int,int>> vec(m);
    ll cur = 2;
    ll ret = 0;
    for(int i = 0; i < m; i++){
        int u,v; cin>>u>>v;
        u--;v--;
        add[i] = cur;
        cur = (cur*2)%mod;
        vec[i].first=u;
        vec[i].second=v;
    }
    for(int i = m-1; i>=0; i--){
        if(d.merge(vec[i].first,vec[i].second)&&d.components!=2 || !d.merge(vec[i].first,vec[i].second)){
            //cout << "not" << (i+1) << nl;
        }else{
            //cout<<add[i] << " " << (i+1) << nl;
            ret = (ret + add[i])%mod;
        }
    }
    cout<<ret;

    return 0;
}