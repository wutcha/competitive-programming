#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll x; cin>>x;
        ll y = 1;
        while(y<x)y*=10;
        cout<<(y+1)<<nl;
    }
    return 0;
}