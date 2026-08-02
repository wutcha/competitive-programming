#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin>>n>>m;
    vector<int> v(n);
    vector<vector<ll>> arr(n,vector<ll>(m+1));
    ll sum = 1;
    ll mod = 1e9+7;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i]==0){
            if(i==0){
                for(int j = 1; j<=m; j++) arr[i][j]=1;
                continue;
            }
            for(int j = 1; j<=m; j++){
                arr[i][j]=arr[i-1][j];
                if(j>1) arr[i][j]=(arr[i][j]+arr[i-1][j-1])%mod;
                if(j<m) arr[i][j]=(arr[i][j]+arr[i-1][j+1])%mod;
            }
        }else{
            arr[i][v[i]]=1;
            if(i==0){
                continue;
            }
            ll mult = arr[i-1][v[i]];
            if(v[i]>1) mult+=arr[i-1][v[i]-1];
            if(v[i]<m) mult+=arr[i-1][v[i]+1];
            mult%=mod;
            sum = (sum*mult)%mod;
        }
    }
    if(v[n-1]==0){
        ll s = 0;
        for(int i = 1; i <= m; i++){
            s+=arr[n-1][i];
        }
        s%=mod;
        sum = (sum*s)%mod;
    }
    cout<<sum;


    return 0;
}