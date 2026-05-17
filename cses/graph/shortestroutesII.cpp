#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int n,m,q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m>>q;
    vector<vector<ll>> v(n,vector<ll>(n,1e15));
    for(int i = 0; i < m; i++){
        int a,b;
        ll c;
        cin>>a>>b>>c;
        a--;
        b--;
        v[a][b] = min(v[a][b],c);
        v[b][a] = min(v[b][a],c);
    }

    for(int k = 0; k < n; k++){
        v[k][k] = 0;
        for(int i = 0; i < n; i++){
            if(k==i) continue;
            for(int j = 0; j < n; j++){
                if(k==i||k==j) continue;
                v[i][j] = min(v[i][j],v[i][k]+v[k][j]);
            }
        }
    }

    while(q--){
        int a,b;
        cin>>a>>b;
        a--; b--;
        cout<<(v[a][b]==1e15?-1:v[a][b])<<nl;
    }

    return 0;
}