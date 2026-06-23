#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n, k; cin>>n>>k;
        int kk = k;
        string s; cin>>s;
        
        vector<int> pref(n+1);
        vector<int> prefr(n+1);

        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + (s[i]=='('?1:0);
            prefr[i] = prefr[i-1] + (s[i]==')'?1:0);
        }
        int r = prefr[n];
        
        int ind = 0;
        for(int i = 0; i < n; i++){
            if(pref[i]+r-prefr[i]<pref[ind]+r-prefr[ind]) ind = i;
        }
        
        for(int i = 0; i < n; i++){
            if(k>0 && (s[i]=='(' && i<ind||s[i]==')'&&i>ind)) {
                k--;
                cout<<1;
            }else cout<<0;
        }
        cout<<nl;
    }

    return 0;
}