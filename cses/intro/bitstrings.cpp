#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    ll c = 1;
    ll mod = 1e9+7;

    while(n--){
        c=(c*2)%mod;
    }
    cout<<c;

    return 0;
}