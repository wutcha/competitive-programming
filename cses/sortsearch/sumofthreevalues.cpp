#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
map<ll,int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    ll t;
    cin>>n>>t;
    vector<pair<ll,int>> v;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    bool b = false;
    for(int i = 0; i < n-2&&!b; i++){
        ll target = t-v[i].first;
        int lo = i+1;
        int hi = n-1;

        while(lo < hi){
            ll val = v[lo].first + v[hi].first;
            if(val == target){
                cout << v[i].second << " " << v[lo].second << " " << v[hi].second;
                b = true;
                break;
            }else if(val > target){
                hi--;
            }else{
                lo++;
            }
        }

    }
    if(!b) cout << "IMPOSSIBLE";

    return 0;
}