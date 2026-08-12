#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q; cin>>n>>q;

    vector<vector<int>> v(n+1,vector<int>(n+1,0));
    for(int i = 0; i < n; i++){
        string ss; cin>>ss;
        for(int j = 0; j < n; j++){
            if(ss[j]=='*'){
                v[i+1][j+1]=1;
            }
            v[i+1][j+1]+=v[i+1][j]+v[i][j+1]-v[i][j];
        }
    }
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        cout<<(v[c][d]-v[c][b-1]-v[a-1][d]+v[a-1][b-1])<<nl;
    }

    return 0;
}