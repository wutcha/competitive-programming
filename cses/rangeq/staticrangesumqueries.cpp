#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,q;
    cin>>n>>q;

    vector<ll> v(n+1);
    for(int i = 1; i<=n; i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    while(q--){
        int a,b; cin>>a>>b;
        cout<<v[b]-v[a-1]<<nl;
    }

    

    return 0;
}