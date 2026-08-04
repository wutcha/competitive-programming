#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

//priorityqueue much?

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    vector<string> s;
    vector<vector<bool>> v(n,vector<bool>(n,false));
    for(int i = 0; i < n; i++) {
        string ss; cin>>ss;
        s.push_back(ss);
    }
    queue<pair<int,int>> q;

    q.push({0,0});
    
    int p = 0;
    while(!q.empty()){
        cout<<s[q.front().first][q.front().second];
        vector<pair<int,int>> cands;
        char mc = 'Z';
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            if(t.first<n-1&&!v[t.first+1][t.second]){
                cands.push_back({t.first+1,t.second});
                mc = min(mc,s[t.first+1][t.second]);
                v[t.first+1][t.second]=true;
            }
            if(t.second<n-1){
                cands.push_back({t.first,t.second+1});
                mc = min(mc,s[t.first][t.second+1]);
                v[t.first][t.second+1]=true;
            }
        }
        for(auto i: cands){
            if(s[i.first][i.second]==mc) q.push(i);
        }
        
    }
    return 0;
}