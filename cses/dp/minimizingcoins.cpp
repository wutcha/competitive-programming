#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int n,x;
int dp[1000005];
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>x;
    v.clear();
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    fill(begin(dp),end(dp),-1);
    dp[0]=0;
    for(int i = 0; i < x; i++){
        if(dp[i]==-1) continue;
        for(auto j: v){
            if(i+j<1000005) {
                dp[i+j]=min(dp[i+j]==-1?10000000:dp[i+j],dp[i]+1);
            }
        }
    }
    cout<<dp[x];
    
    return 0;
}