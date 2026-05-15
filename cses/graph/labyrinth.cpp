#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<string> v;
int n,m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    int c = 0;
    queue<pair<int,pair<int,int>>> p;
    vector<string> l;
    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0; i < n; i++) {
        string s; cin>>s;
        l.push_back(s);
        for(int j = 0; j < m; j++){
            if(s[j]=='A'){
                p.push({1,{i,j}});
            }
        }
    }
    string ret;
    bool found = false;
    while(!p.empty()){
        pair<int,pair<int,int>> cur = p.front();
        p.pop();
        int val = cur.first;
        int r = cur.second.first;
        int c = cur.second.second;
        if(r<0||r>=n||c<0||c>=m) continue;
        if(v[r][c]!=0||l[r][c]=='#') continue;
        v[r][c] = val;
        if(l[r][c] == 'B'){
            found = true;
            cout<<"YES"<<nl;
            cout<<val-1<<nl;
            int i = r;
            int j = c;
            while(val!=1){
                if(r > 0 && v[r-1][c] == val-1){
                    r--;
                    ret.push_back('D');
                }else if(c > 0 && v[r][c-1] == val-1){
                    c--;
                    ret.push_back('R');
                }else if(r < n-1 && v[r+1][c] == val-1){
                    r++;
                    ret.push_back('U');
                }else {
                    c++;
                    ret.push_back('L');
                }
                val--;
            }
            break;
        }

        p.push({val+1,{r+1,c}});
        p.push({val+1,{r-1,c}});
        p.push({val+1,{r,c+1}});
        p.push({val+1,{r,c-1}});
    }
    reverse(ret.begin(),ret.end());
    if(!found) cout<<"NO";
    else cout<<ret;

    return 0;
}