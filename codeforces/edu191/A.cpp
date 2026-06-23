#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll n,x,y,z; cin>>n>>x>>y>>z;
        ll zt = x*z;
        ll nn = n-zt;

        ll t1 = n/(x+y) + (n%(x+y)==0?0:1);
        ll t2 = z+nn/(x+10*y) + (nn%(x+10*y)==0?0:1);
        cout<<min(t1,t2)<<nl;
    }

    return 0;
}