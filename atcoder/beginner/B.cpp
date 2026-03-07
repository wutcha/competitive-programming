#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; //cin >> t;
    while(t--){
        int n,m; cin>>n>>m;
        int v[m];
        for(int i = 0; i < m; i++){
            cin>>v[i];
        }
        ll sum = 0;

        for(int i = 0; i < n ;i++){
            int a,b; cin>>a>>b;
            a--;
            int mm = min(b,v[a]);
            sum += mm;
            v[a]-= mm;
        }
        cout<<sum<<nl;

    }

    return 0;
}