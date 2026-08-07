#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        ll prev = 0;
        bool c = true;
        for(ll i = 1; i<=n; i++){
            ll cur; cin>>cur;
            if(cur+prev<i){
                c = false;
            }else{
                cur+=prev;
                prev = (cur-i);
            }
        }
        cout<<(c?"YES":"NO")<<nl;
    }

    return 0;
}