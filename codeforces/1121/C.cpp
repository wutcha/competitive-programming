#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n);
        for(auto& i: v) cin>>i;
        sort(v.rbegin(), v.rend());
        ll sum = 0;
        ll mod = 998244353;
        ll pref = v[0];
        //num of trees factorial?
        ll fact = 1;
        ll oppfact = 1;
        for(ll i = 1; i < n; i++){
            ll cur = v[(int)i];
            //diff = fact(pref-current * i)%mod
            ll diff = (((pref-(cur*i))%mod))%mod;
            sum = (sum+diff)%mod;
            fact=(fact*(i))%mod;
            pref += cur;
        }
        cout<<(sum*fact)%mod<<nl;
    }

    return 0;
}