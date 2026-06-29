#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n, m; cin>>n>>m;

        vector<int> a,b;
        for(int i = 0; i < n; i++){
            int aa; cin>>aa; a.push_back(aa);
        }
        for(int i = 0; i < n; i++){
            int aa; cin>>aa; b.push_back(aa);
        }
        int cost1 = 0;
        int cost2 = m;
        bool nop = true;
        bool nop2 = true;
        for(int i = 0; i < n; i++){
            if(b[i]>a[i]){
                nop = false;
                break;
            }
            cost1 += a[i]-b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(int i = 0; i < n; i++){
            if(b[i]>a[i]){
                nop2=false;
                break;
            }
            cost2 += a[i]-b[i];
        }
        if(nop && nop2){
            cout<<min(cost1,cost2)<<nl;
        }else if(nop2) cout<<cost2<<nl;
        else cout<<-1<<nl;
        
    }

    return 0;
}