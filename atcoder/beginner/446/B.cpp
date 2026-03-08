#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin>>n>>m;
    
    set<int> s;
    for(int i = 1; i <= m; i++){
        s.insert(i);
    }
    
    for(int i = 0; i < n; i++){
        int l; cin>>l;
        
        bool sk = false;
        int v = 0;
        for(int j = 0; j < l; j++){
            int cur; cin>>cur;
            if(sk) continue;
            if(s.erase(cur)){
                sk = true;
                v = cur;
            }
        }
        cout << v << nl;
    }

    return 0;
}