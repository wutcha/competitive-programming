#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> v;
    ll s = 0;
    ll m = 0;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        s+=a;
        m = max(a,m);
        v.push_back(a);
    }
    cout << ((m>s-m)?(2*m):s);

    return 0;
}