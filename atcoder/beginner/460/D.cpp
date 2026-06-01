#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<int> cx = {1,1,0,-1,-1,-1,0,1}; vector<int> cy = {0,-1,-1,-1,0,1,1,1};
const int tot = 1000000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int h,w; cin>>h>>w;
    vector<vector<int>> v(h,vector<int>(w,tot));
    vector<string> s;
    queue<pair<int,int>> q;
    for(int i = 0; i < h; i++){
        string ss; cin>>ss;
        s.push_back(ss);
    }


    vector<string> cop(h,string(w,'.'));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j]=='#'){
                for(int l = 0; l < 8; l++){
                    int ny = i+cy[l];
                    int nx = j+cx[l];
                    if(nx>=0&&nx<w&&ny>=0&&ny<h&&s[ny][nx] == '.'){
                        cop[ny][nx] = '#';
                    }
                }
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            s[i][j] = cop[i][j];
            if(cop[i][j]=='#'){
                v[i][j] = 0;
                q.push({i,j});
            }
        }
    }
    
    while(!q.empty()){
        auto cur = q.front(); q.pop();

        for(int i = 0; i < 8; i++){
            int ny = cur.first+cy[i];
            int nx = cur.second+cx[i];
            if(nx>=0&&nx<w&&ny>=0&&ny<h&&v[ny][nx]==tot){
                v[ny][nx] = v[cur.first][cur.second]+1;
                q.push({ny,nx});
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            s[i][j] = (v[i][j]%2==0?'.':'#');
        }
        cout<<s[i]<<nl;
    }



    return 0;
}