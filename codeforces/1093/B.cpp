#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        int n,m; cin>>n>>m;
        int type = -1;
        int c = 0;
        int ma = 0;
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            if(a==type){
                c++;
                ma = max(ma,c);
            }else{
                c=1;
                type=a;
            }
        }
        if(ma>=m) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
        
    }

    return 0;
}