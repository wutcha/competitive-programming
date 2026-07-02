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
        vector<ll> a,b;
        for(int i = 0; i < n; i++){
            ll aa; cin>>aa; a.push_back(aa);
        }
        for(int i = 0; i < n; i++){
            ll aa; cin>>aa; b.push_back(aa);
        }
        bool ch = true;
        for(int i = n-1; i >= 0; i--){
            if(a[i]>b[i]){
                if(i>0){
                    ll diff = a[i]-b[i];
                    a[i-1]+=diff;
                }else{
                    ch = false;
                    break;
                }
            }
        }
        cout<<(ch?"YES":"NO")<<nl;
    }

    return 0;
}