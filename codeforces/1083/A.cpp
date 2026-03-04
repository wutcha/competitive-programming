#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        int max = -1;
        for(int i=0; i<n;i++){
            int cur; cin>>cur; v.push_back(cur);
            if(cur==n) max = i;
        }
        int val = v[max];
        v[max] = v[0];
        v[0] = val;
        for(auto i: v) cout << i << " ";
        cout<<'\n';
    }

    return 0;
}