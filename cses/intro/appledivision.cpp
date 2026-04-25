#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll a ;cin>>a;
        v.push_back(a);
    }
    ll m = LONG_LONG_MAX;
    for(int i = 0; i < 1<<(n); i++){
        ll one = 0;
        ll two = 0;
        int cur = i;
        
        for(int j = 0; j < n; j++){
            if((cur&1)==1){
                one+=v[j];
            }else two+=v[j];
            cur/=2;
        }
        m = min(m,abs(one-two));
    }
    cout<<m;

    return 0;
}