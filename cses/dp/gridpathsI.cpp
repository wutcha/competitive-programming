#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    ll mod = 1e9+7;
    vector<vector<ll>> v(n,vector<ll>(n));
    vector<string> ss;
    v[0][0]=1;
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        if(i==0&&s[0]=='*'){
            cout<<0;
            return 0;
        }
        ss.push_back(s);
        for(int j = 0; j < n; j++){
            if(s[j]=='*') continue;
            if(i>0){
                v[i][j]=(v[i-1][j])%mod;
            }
            if(j>0){
                v[i][j]=(v[i][j-1]+v[i][j])%mod;
            }
        }
    }
    cout<<v[n-1][n-1];
    

    return 0;
}