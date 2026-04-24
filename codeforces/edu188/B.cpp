#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        stack<int> s;
        int n; cin>>n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            v.push_back(a);
        }
        for(int i = n-1; i>=0 ;i--){
            while(!s.empty()&&v[i]>s.top()) s.pop();
            s.push(v[i]);
        }
        cout<<s.size()<<nl;
    }

    return 0;
}