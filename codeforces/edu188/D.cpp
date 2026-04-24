#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<int> assign;
vector<bool> visited;
int one;
int two;

bool dfs(vector<vector<int>>& v, int cur, int t){
    bool valid = true;
    if(t==1)one++;
    else two++;
    assign[cur] = t;
    visited[cur] = true;
    for(auto i: v[cur]){
        if(assign[i]==t) valid = false;
        if(!visited[i]&&!dfs(v,i,t==1?2:1)) valid = false;
    }
    return valid;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,m; cin>>n>>m;
        assign = vector<int>(n+1);
        vector<vector<int>> v(n+1);
        visited = vector<bool>(n+1);
        
        for(int i = 0; i < m; i++){
            int a,b; cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int total = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                one = 0,two=0;
                bool valid = dfs(v,i,1);
                if(valid) {
                    total+=max(one,two);
                }
            }
        }
        cout<<total<<nl;



    }

    return 0;
}