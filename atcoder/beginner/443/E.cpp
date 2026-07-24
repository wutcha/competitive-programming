#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,cc; cin>>n>>cc;
        
        vector<string> v;
        vector<vector<int>> obs(n,vector<int>());
        vector<int> loc(n,n+1);
        for(int i = 0; i < n; i++) obs[i].push_back(-1);
        for(int i = 0; i < n; i++){
            string s; cin>>s;
            v.push_back(s);
            for(int j = 0; j < n; j++){
                if(s[j]=='#') obs[j].push_back(i);
            }
        }
        
        queue<pair<int,int>> q;
        q.push({n-1,cc-1});
        
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            
            int r = cur.first;
            int c = cur.second;
            if(r==-1) break;
            if(c<0||c>=n) continue;
            if(loc[c]<=r) continue;
            if(v[r][c]=='.'){
                loc[c]=r;
                q.push({r-1,c-1});
                q.push({r-1,c});
                q.push({r-1,c+1});
            }else{
                if(r==obs[c].back()){
                    obs[c].pop_back();
                    loc[c]=r;
                    
                    q.push({r-1,c-1});
                    q.push({r-1,c});
                    q.push({r-1,c+1});
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout<<(loc[i]==0?1:0);
        }
        cout<<nl;


    }

    return 0;
}