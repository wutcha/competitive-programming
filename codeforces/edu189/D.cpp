#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    ll mod = 998244353;
    while (t--) {
        ll n,x; cin>>n>>x;
        ll lo = (x-1)/4;
        ll hi = n/4;
        if((x-1)%4>=1) lo++;
        if((n)%4>=1) hi++;
        
        ll c =(lo%mod)*((hi-lo)%mod)%mod;
        lo = (x-1)/4+1;
        hi = (n)/4+1;
        if((x-1)%4>=3) lo++;
        if((n)%4>=3) hi++;

        c+=(lo%mod)*((hi-lo)%mod)%mod;
        c%=mod;
        cout<<c<<nl;
        
        






    }

    return 0;
}