#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        vector<int> v;
        set<int> s;
        int n; cin>>n;
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            s.insert(a);
            v.push_back(a);
        }
        if(s.size()!=n){
            cout<<-1<<nl;
        }else{
            sort(v.rbegin(),v.rend());
            for(auto i: v) cout<<i<<" ";
            cout<<nl;
        }
    }

    return 0;
}