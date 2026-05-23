#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin>>n>>m;
    vector<int> v(m);
    for(int i = 0; i < n; i++){
        int a,b; cin>>a>>b;
        v[a-1]--;
        v[b-1]++;
    }
    for(auto i: v) cout<<i<<nl;

    return 0;
}