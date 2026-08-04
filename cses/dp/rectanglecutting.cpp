#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a,b; cin>>a>>b;
    vector<vector<ll>> v(501, vector<ll>(501,(ll)INT_MAX));
    //a<b
    if(a>b) swap(a,b);
    for(int i = 1; i < 501; i++){
        v[i][i]=0;
    }
    for(int i = 1; i < 501; i++){
        for(int j = 1; j < 501; j++){
            if(i==j) continue;
            for(int k = 1; k<max(i,j); k++){
                if(i-k>0) v[i][j] = min(v[i][j],v[i-k][j]+v[k][j]+1);
                if(j-k>0) v[i][j] = min(v[i][j],v[i][j-k]+v[i][k]+1);
            }
        }
    }
    cout<<v[a][b];

    return 0;
}