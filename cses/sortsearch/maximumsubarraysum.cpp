#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    ll ret;
    cin>>ret;
    vector<ll> v;
    v.push_back(ret);
    
    for(int i = 1; i < n ;i++){
        ll a; cin>>a;
        v.push_back(a);
        ret = max(ret,a);
    }
    ll cur = 0;
    for(auto i: v){
        cur += i;
        ret = max(cur,ret);
        if(cur < 0){
            cur = 0;
        }
    }

    cout<<ret;

    return 0;
}