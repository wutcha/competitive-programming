#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin>>n;

    ll sum = (n+1)*n/2;
    while(n-->1) {
        ll a; cin>>a;
        sum-=a;
    }
    cout<<sum;

    return 0;
}