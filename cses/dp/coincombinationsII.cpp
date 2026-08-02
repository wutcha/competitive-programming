#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,x; cin>>n>>x;
    vector<ll> v(x+1);
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        coins.push_back(a);
    }
    ll mod = 1e9+7;
    sort(coins.begin(),coins.end());
    v[0] = 1;
    for(auto i: coins){
        for(int j = i; j < x+1; j++){
            v[j]=(v[j]+v[j-i])%mod;
        }
    }
    cout<<v[x];

    return 0;
}