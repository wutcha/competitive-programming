#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        string s; cin>>s;
        int a=0,b=0;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            if(c=='1'&&a==0) a++;
            else if(c=='0'&&b==0) b++;
            else cout<<c;
        }
        cout<<nl;
    }

    return 0;
}