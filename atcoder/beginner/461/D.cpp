#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,k; cin>>n>>m>>k;
    vector<vector<int>> vect(n,vector<int>(m+1));
    vector<int> v(m+1);
    ll ret = 0;
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        for(int j = 1; j <= m; j++){
            v[j] += s[j-1]-'0';
            vect[i][j] = s[j-1]-'0';
        }
        vector<int> vv(v);
        for(int j = 0; j <= i; j++){
            int lo = 0, hi = vv[1], lp = 0, hp = 1;

            while(hp <= m){
                if(hi-lo==k){
                    int cl = 1, ch = 1;
                    lp++;
                    hp++;
                    while(lp < hp && vv[lp]==0){cl++;lp++;}
                    while(hp <= m && vv[hp]==0){ch++;hp++;}
                    //cout<<cl<<" "<<ch<<" "<<i<<" "<<j<<" "<<lo<<" "<<hi<<nl;
                    ret += cl*ch;
                    
                    if(lp>m) break;
                    lo+=vv[lp];
                    if(hp>m) break;
                    hi+=vv[hp];
                }else if(hi-lo<k){
                    hp++;
                    if(hp>m) break;
                    hi+=vv[hp];
                }else{
                    lp++;
                    if(lp>m) break;
                    lo+=vv[lp];
                }
            }

            for(int l = 0; l <= m; l++){
                vv[l]-=vect[j][l];
            }
        }

    }

    cout<<ret;

    return 0;
}