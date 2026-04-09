#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> v;
    for(int i =0 ; i < n; i++) {
        ll a; cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll d = 1;
    bool b = false;
    for(auto i: v){
        if(i>d){
            cout<<d;
            b = true;
            break;
        }
        d+=i;
    }
    if(!b) cout<<d;

    return 0;
}