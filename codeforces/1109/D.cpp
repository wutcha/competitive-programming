#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,m; cin>>n>>m;
        vector<ll> v(n);
        vector<ll> pref(n+1,0);
        vector<int> p(m+1,0);
        vector<int> mul(n,1);
        for(int i = 1; i <= n; i++) {
            cin>>v[i-1];
            pref[i]=v[i-1]+pref[i-1];
        }
        for(int i = 1; i <= m; i++) cin>>p[i];
        sort(p.begin(),p.end());
        ll sum = 0;
        for(int i = 1; i<=m; i++){
            //cout<<mult<<" "<<pref[p[m]]<<nl;
            sum+=abs(pref[p[i]]-pref[p[i-1]]);
        }
        cout<<(sum+pref[n]-pref[p[m]])<<nl;
    }

    return 0;
}