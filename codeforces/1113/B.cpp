#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,m; cin>>n>>m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < m; i++) cin>>b[i];

        if(2*m>n){
            cout<<"NO"<<nl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int hi = m;
        bool tr = true;
        for(int i = 0; i < m; i++){
            if(a[i]>b[i]){
                tr = false;
                break;
            }
            while(hi < n && a[hi] < b[i]){
                hi++;
            }
            if(hi==n){
                tr = false;
                break;
            }
            hi++;
        }

        cout<<(tr?"YES":"NO")<<nl;
    }

    return 0;
}