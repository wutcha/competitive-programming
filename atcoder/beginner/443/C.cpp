#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; ll t; cin>>n>>t;
    ll reopen = 0;
    ll total = 0;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        if(a<reopen) continue;
        total += a-reopen;
        reopen = a+100;
    }
    total += max(0LL,t-reopen);
    cout<<total;

    return 0;
}