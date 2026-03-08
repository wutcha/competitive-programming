#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

map<int,int> m;
bool b[200001];

int a[200001];

vector<vector<int>> adj;

int c = 0;

void dfs(int cur, int p){
    
    if(m[a[cur]]==1) c++;
    m[a[cur]]++;
    if(c>0) b[cur] = true;
    for(auto i: adj[cur]){
        if(i!=p) {
            dfs(i,cur);
        }
    }
    if(m[a[cur]]==2) c--;
    m[a[cur]]--;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    adj.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1;i ++){
        int x,y; cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }

    dfs(0,-1);
    for(int i = 0; i < n; i++){
        cout << (b[i]?"Yes":"No") << nl;
    }

    return 0;
}