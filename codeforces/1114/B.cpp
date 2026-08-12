#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        int c = 1;
        int sub = 0;
        for(int i = 1; i < n; i++){
            if(s[i]!=s[i-1]) c++;
            if(i!=n-1&&s[i]!=s[i-1]&&s[i]!=s[i+1]) sub=max(sub,1);
            if(i!=n-1&&s[i]!=s[i-1]&&s[i-1]==s[i+1]) sub=2;
        }

        cout<<(c-sub)<<nl;
    }

    return 0;
}