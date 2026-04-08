#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll mid = v[n/2];
    ll sum = 0;
    for(auto i: v) sum+=abs(mid-i);
    cout<<sum;

    return 0;
}