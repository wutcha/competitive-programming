#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        ll dist = (a-d)*(a-d)+(b-e)*(b-e);
        ll dd = sqrt(dist);
        if(dist <= (c+f)*(c+f)&&((dd+f)*(dd+f) >= c*c)&&(dd+c)*(dd+c)>=f*f){
            cout<<"Yes";
        }else cout<<"No";
        cout<<nl;
    }

    return 0;
}