#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,q; cin >> n>>q;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    while(q--){
        int b; cin>>b;
        set<int> s;
        while(b--){
            int cur; cin>>cur;
            cur--;
            s.insert(cur);
        }
        //for(auto i: s) cout << i << " ";
        //cout<<"eee"<<nl;
        for(auto i: v){
            //cout << i.first << " " << i.second << nl;
            if(s.find(i.second)==s.end()){
                cout << i.first << nl;
                break;
            }
        }
    }

    return 0;
}