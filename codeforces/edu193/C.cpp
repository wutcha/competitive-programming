#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,m,x,y; cin>>n>>m>>x>>y;
        vector<int> va(x);
        vector<int> vb(y);
        set<int> a;
        vector<int> v;
        for(int i = 0; i < x; i++) {
            cin>>va[i];
            a.insert(va[i]);
        }
        set<int> shared;
        for(int i = 0; i < y; i++) {
            cin>>vb[i];
            if(a.count(vb[i])) {
                shared.insert(vb[i]);
                v.push_back(vb[i]);
            }
        }
        int total = n+m-1;
        for(int i = x-1; i>=0&&n; i--){
            if(!shared.count(va[i])){
                v.push_back(va[i]);
                n--;
            }
        }
        for(int i = y-1; i>=0&&m; i--){
            if(!shared.count(vb[i])){
                v.push_back(vb[i]);
                m--;
            }
        }
        sort(v.begin(),v.end());
        ll sum = 0;
        for(int i = v.size()-1; i>=0 && total; i--){
            sum+=v[i];
            total--;
        }
        



        cout<<sum<<nl;

    }

    return 0;
}