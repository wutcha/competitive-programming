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
        vector<int> v(2*n+1);
        for(int i = 1; i <= 2*n; i++) cin>>v[i];
        vector<ll> dp(2*n+1,0);
        map<int,int> mp;
        for(int i = 1; i <= 2*n; i++){
            if(!mp.count(v[i])) mp[v[i]]=i;
            else{
                dp[i]=max(dp[i-1]+1,dp[mp[v[i]]-1]+(ll(i-mp[v[i]]+1))*(ll(i-mp[v[i]]+1)));
            }
            dp[i]=max(dp[i],dp[i-1]+1);
        }
        
        cout<<dp[2*n]<<nl;
    }

    return 0;
}