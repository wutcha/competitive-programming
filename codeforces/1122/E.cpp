#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<ll> v(n+1,INT_MAX);
        vector<bool> s(n+1);
        vector<bool> prime(n+1);
        v[1]=0;
        for(int i = 2; i<=n; i++){
            if(!s[i]){
                prime[i]=true;
                for(int j = i; j<=n; j+=i) s[j]=true;
            }
            if(i>k){
                for(int j = 1; j*j<=i; j++){
                    if(i%j==0){
                        //if(t==4)cout<<prime[i/j]<< " " << i << " " << j<<nl;
                        if(prime[j]) v[i] = min(v[i], j*v[i/j]+1);
                        if(prime[i/j]) v[i] = min(v[i], i/j*v[j]+1);
                    }
                }
            }else{
                v[i]=0;
            }
        }
        ll sum = 0;
        for(int i = 0; i < n; i++){
            ll a; cin>>a;
            sum+=v[a];
        }
        //for(int i = 1; i<=n; i++) if(t==4) cout<<v[i]<<" "<<i<<nl;
        cout<<sum<<nl;
    }

    return 0;
}