#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    vector<int> v(n);
    int pos = 0;
    for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    auto it = lower_bound(v.begin(), v.end(), 0);
    int hi = it - v.begin(), lo = hi-1;
    ll total = 0;
    while(lo >= 0 || hi < n){
        if(hi == n || hi < n && lo >= 0 && abs(pos-v[lo])<=abs(pos-v[hi])){
            total += abs(pos - v[lo]);
            pos = v[lo];
            lo--;
        }else{
            total += abs(pos-v[hi]);
            pos = v[hi];
            hi++;
        }
    }
    cout<<total<<nl;


    return 0;
}