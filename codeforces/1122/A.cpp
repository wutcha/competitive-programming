#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        int a,b,c; cin>>a>>b>>c;
        
        cout << (n-min(min(a,b),c))<<nl;
    }

    return 0;
}