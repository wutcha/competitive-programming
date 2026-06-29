#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll n; cin>>n;
        ll ret = 0;
        for(ll i = 1; i <= n; i++){
            ret += (n/i)*(n/i);
        }
        cout<<ret<<nl;
    }

    return 0;
}