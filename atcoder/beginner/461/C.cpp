#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k,m; cin>>n>>k>>m;
    vector<pair<ll,int>> v;
    for(int i = 0; i < n; i++){
        int a; ll val; cin>>a>>val;
        v.push_back({val,a});
    }
    sort(v.rbegin(),v.rend());
    vector<int> vis(n);
    set<int> s;
    ll ret = 0;
    for(int i = 0; s.size()<m&&i<n; i++){
        if(s.count(v[i].second)==0){
            ret += v[i].first;
            s.insert(v[i].second);
            vis[i] = 1;
            k--;
        }
    }
    for(int i = 0; k > 0; i++){
        if(vis[i] == 1) continue;
        ret+=v[i].first;
        k--;
    }
    cout<<ret;

    return 0;
}