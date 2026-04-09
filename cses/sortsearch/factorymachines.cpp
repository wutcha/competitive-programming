#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool check(vector<ll>& v, ll val, ll t){
    ll count = 0;
    for(auto i: v){
        count += (val/i);
        if(count>=t) return true;
    }
    //cout<<count<<" e"<<nl;
    return count >= t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    ll t; 
    cin>>n>>t;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        v.push_back(a);
    }
    
    ll lo = 1, hi = 1e18+1;
    while(lo<hi){
        ll mid = (lo+hi)/2;
        //cout<<mid<<nl;
        if(check(v,mid,t)){
            hi = mid;
        }else{
            lo = mid+1;
        }
    }

    cout<<lo;

    return 0;
}