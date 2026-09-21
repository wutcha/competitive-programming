#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        cout<<max(abs(a+c-b),abs(a-b))<<nl;;
    }

    return 0;
}