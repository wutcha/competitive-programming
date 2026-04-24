#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll ab = a*b/gcd(a,b);
        ll ac = a*c/gcd(a,c);
        ll bc = c*b/gcd(b,c);

        ll abc = ab*c/gcd(ab,c);

        ll ra = m/a*6;
        ll rb = m/b*6;
        ll rc = m/c*6;

        ll rabc = m/abc;
        ra-=4*rabc;
        rb-=4*rabc;
        rc-=4*rabc;

        ll rab = m/ab-rabc;
        ll rac = m/ac-rabc;
        ll rbc = m/bc-rabc;
        
        ra-=rab*3;
        rb-=rab*3;
        ra-=rac*3;
        rc-=rac*3;
        rb-=rbc*3;
        rc-=rbc*3;
        
        cout<<ra<<" "<<rb<<" "<<rc<<" "<<nl;

        
    }

    return 0;
}