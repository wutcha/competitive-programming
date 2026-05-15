#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<string> v;
int n,m; 

void fill(int r, int c){
    if(r < 0 || r >= n || c < 0 || c >= m) return;
    if(v[r][c]=='#') return;
    v[r][c] = '#';

    fill(r+1,c);
    fill(r-1,c);
    fill(r,c+1);
    fill(r,c-1);
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    int c = 0;
    for(int i = 0; i < n; i++) {
        string s; cin>>s;
        v.push_back(s);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j]=='.'){
                c++;
                fill(i,j);
            }
        }
    }
    cout<<c;

    return 0;
}