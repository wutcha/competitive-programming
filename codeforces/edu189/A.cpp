#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        ll x,y; cin>>x>>y;
        if(y==2*x) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    
    }

    return 0;
}