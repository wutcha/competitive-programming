#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin>>n;
    map<ll,ll> m;
    ll r = 0;
    ll c = 0;
    m[0]=1;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        //cout<<c<<" ";
        r+=a;
        r=((r%n)+n)%n;
        //cout<<(n-r)%n<<" " << m[(n-r)%n] << nl;
        c+=m[r];
        m[r]++;
    }
    cout<<c;

    return 0;
}