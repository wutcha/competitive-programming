#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin>>n;

    ll sum = 0;
    sum+=n/5;
    for(ll i = 100; i<=min(n,1e9); i*=10){
        sum+=n/i;
    }
    
    cout<<sum;
    return 0;
}