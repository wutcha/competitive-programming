#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll a = 0, b=0;
        int n, m; cin>>n>>m;
        
        ll prev = -1;
        while(n--){
            ll i; cin>>i;
            if(prev==-1) {
                prev = i;
                continue;
            }
            a += (prev-i+1);
            prev = i;
        }
        a+=prev;
        prev = -1;
        while(m--){
            ll i; cin>>i;
            if(prev==-1) {
                prev = i;
                continue;
            }
            b += (prev-i+1);
            prev = i;
        }
        b+=prev;
        cout<<(a>=b?1:2)<<nl;

    }

    return 0;
}