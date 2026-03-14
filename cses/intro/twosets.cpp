#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2==1) cout<<"NO";
    else{
        cout<<"YES"<<nl;
        sum/=2;
        vector<ll> v1;
        vector<ll> v2;
        while(n){
            if(sum>=n){
                sum-=n;
                v1.push_back(n);
            }else{
                v2.push_back(n);
            }
            n--;
        }

        cout<<v1.size()<<nl;
        for(auto i : v1) {
            cout<<i<<" ";
        }
        cout<<nl;
        cout<<v2.size()<<nl;
        for(auto i : v2) cout<<i<<" ";
        cout<<nl;
        
        
    }

    return 0;
}