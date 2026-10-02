#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> a(n),b(n);
    ll diff = 0;
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<ll> pr;
    bool found = false;
    for(int i = 0; i < n; i++) {
        cin>>b[i];
        if(b[i]>=a[i] || found) {
            //diff+=a[i]-b[i];
            pr.push_back(1);
        }else{
            found = true;
            ll dif = a[i]-b[i];
            ll add = 1e18/dif;
            pr.push_back(add);
        }
    }
    if(!found) cout<<"No"<<nl;
    else{
        cout<<"Yes"<<nl;
        for(auto i: pr) cout<<i<<" ";
    }

    return 0;
}