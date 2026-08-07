#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,x,y; cin>>n>>x>>y;
        int g = gcd(x,y);
        bool v = true;
        for(int i = 1; i <= n; i++){
            int cur; cin>>cur;
            int dist = abs(cur-i);
            if(dist%g!=0) v = false;
        }
        cout<<(v?"YES":"NO")<<nl;
    }

    return 0;
}