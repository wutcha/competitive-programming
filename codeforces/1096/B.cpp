#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; string s; cin>>n>>s;
        int l = 0; int r = 0;
        for(auto i: s) {
            if(i=='(') l++;
            else r++;
        }
        cout << (l==r?"YES":"NO") << nl;
    }

    return 0;
}