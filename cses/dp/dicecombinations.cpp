#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int n;
ll mod = 1e9+7;
ll dp[(int)1e6+6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;

    dp[0]=1;
    for(int i = 0; i <= n; i++){
        for(int j = 1; j<=6; j++){
            dp[i+j]+=dp[i];
            dp[i+j]%=mod;
        }
    }
    cout<<dp[n];
    

    return 0;
}