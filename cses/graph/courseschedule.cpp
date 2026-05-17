#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int n,m; cin>>n>>m;
    queue<int> q;
    vector<vector<int>> v(n+1);
    vector<int> in(n+1);

    for(int i = 0; i < m; i++){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        in[b]++;
    }
    for(int i = 1; i<=n; i++){
        if(in[i]==0) q.push(i);
    }
    int comp = 0;
    vector<int> pr;
    while(!q.empty()){
        int cur = q.front();
        comp++;
        q.pop();
        pr.push_back(cur);
        for(auto i: v[cur]){
            in[i]--;
            if(in[i]==0) q.push(i);
        }
    }
    //cout<<comp;
    if(comp==n){
        for(auto i: pr) cout<<i<<" ";
    }else cout<<"IMPOSSIBLE";


    return 0;
}