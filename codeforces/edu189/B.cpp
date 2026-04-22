#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        string s; cin>>s;
        char p = s[0];
        int c = 0;
        for(int i = 1; i < s.size(); i++){
            if(p==s[i]){
                c++;
            }
            p = s[i];
        }
        if(c>2) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }

    return 0;
}