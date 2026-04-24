#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        int pos = 1;
        for(auto i: s){
            if(i=='L') break;
            pos++;
        }
        cout<<pos<<nl;
    }

    return 0;
}