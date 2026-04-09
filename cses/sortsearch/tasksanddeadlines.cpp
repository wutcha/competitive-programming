#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<pair<ll,ll>> v;
    for(int i =0 ; i < n; i++){
        ll a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll t = 0;
    ll re = 0;
    for(auto i: v){
        t += (i.first);
        re += (i.second-t);
    }
    cout<<re;

    return 0;
}