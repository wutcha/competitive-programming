#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; ll s; cin>>n>>s;
    vector<ll> v;
    int lo = 0;
    ll cur = 0;
    int c = 0;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        v.push_back(a);
        cur += a;
        while(lo < i && cur > s){
            cur-=v[lo];
            lo++;
        } 
        if(cur==s) c++;
    }
    cout<<c;

    return 0;
}