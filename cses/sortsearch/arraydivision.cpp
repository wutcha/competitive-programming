#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool check(vector<ll>& v, ll max, int count){
    ll running = 0;
    int c = 1;
    for(auto i: v){
        if(running+i>max){
            c++;
            running = 0;
        }
        running+=i;
    }
    return c <= count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll lo = 1; ll hi = 0;
    vector<ll> v;
    int n,k; cin>>n>>k;
    for(int i = 0 ; i < n;i++){
        ll a; cin>>a;
        v.push_back(a);
        hi += a;
        lo = max(lo,a);
    }
    while(lo < hi){
        ll mid = (lo+hi)/2;
        if(check(v,mid,k)){
            hi = mid;
        }else {
            lo = mid+1;
        }
    }
    cout<<lo;

    return 0;
}