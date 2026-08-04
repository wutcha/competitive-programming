#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<ll> v(1e6+1);
    ll mod = 1e9+7;
    v[1]=2;
    ll separate = 1;
    ll flat = 1;
    for(int i = 2; i<v.size(); i++){
        separate=(separate*4+flat)%mod;
        flat = (v[i-1]+flat)%mod;
        v[i]=(separate+flat)%mod;
    }

    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        cout<<v[n]<<nl;    
    }

    return 0;
}