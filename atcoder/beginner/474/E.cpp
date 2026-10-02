#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<pair<ll,ll>> v1,v2;
        for(int i = 0; i < n; i++){
            ll a,b; cin>>a>>b;
            v1.push_back({a,b});
            v2.push_back({a,b});
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),[](const auto& a, const auto& b){
            return (a.first-a.second)==(b.first-b.second)?(a.first<b.first):(a.first-a.second)<(b.first-b.second);
        });
        int cups = 0;
        ll cost = 0;
        int p = 0;
        while(p<(n+1)/2 && v2[p].first-v2[p].second <= v1[0].first){
            cost += v2[p].first;
            cups++;
            p++;
        }
        while(p<n){
            if(cups){
                cups--;
                cost+=v2[p].second;
            }else{
                cost+=v2[p].second+v1[0].first;
            }
            p++;
        }
        cout<<cost<<nl;
    }

    return 0;
}