#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        vector<ll> v;
        int n; cin>>n;
        ll ret = 0;
        for(int i = 0; i < n; i++){
            ll a; cin>>a;
            for(auto j: v){
                ret = max(ret,a^j);
            }
            v.push_back(a);
        }
        cout<<ret<<nl;
        
    }

    return 0;
}