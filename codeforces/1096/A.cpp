#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int a, b; cin>>a>>b;
        if(a%2==1&&b%2==1) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }

    return 0;
}