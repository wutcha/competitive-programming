#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<vector<int>> v(n+1,vector<int>());
    
    for(int i = 1; i <= n; i++){
        int m; cin>>m;
        for(int j = 0; j < m; j++){
            int a; cin>>a;
            v[a].push_back(i);
        }
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
        cout<<v[i].size()<<" ";
        for(auto i: v[i]) cout<<i<<" ";
        cout<<nl;
    }

    return 0;
}