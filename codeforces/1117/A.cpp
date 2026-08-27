#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        vector<int> s(26);
        int n, m; cin>>n>>m;
        while(n--){
            string ss; cin>>ss;
            s[ss[0]-'a']++;
        }
        bool yes = true;
        while(m--){
            string abrv; cin>>abrv;
            for(char c: abrv){
                if(!s[c-'A']) yes = false;
            }
        }
        cout<<(yes?"YES":"NO")<<nl;
    }

    return 0;
}