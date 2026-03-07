#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,q; cin >> n>>q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    while(q--){
        int b; cin>>b;
        vector<int> rem;
        int m = INT_MAX;
        while(b--) {
            int c; cin>>c;
            m = min(m,v[c-1]);
            rem[b-1]=c-1;
        }
        for(auto i: rem){
            int pb = v[i];
            v.erase(v.begin()+i);
            v.push_back(pb);
        }
        cout<<m<<nl;
    }

    return 0;
}