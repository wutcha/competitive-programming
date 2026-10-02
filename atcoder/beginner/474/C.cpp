#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    int m; cin>>m;
    vector<int> v;
    set<int> s;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    vector<int> v1;
    for(int i = 0; i < m; i++){
        int a; cin>>a;
        v1.push_back(a);
    }
    vector<int> v2;
    for(int i = m-1; i>=0 ;i--){
        if(!s.count(v1[i])) {
            s.insert(v1[i]);
            v2.push_back(v1[i]);
        }
    }
    for(auto i: v) if(!s.count(i)) cout<<i<<" ";
    reverse(v2.begin(),v2.end());
    for(auto i: v2) cout<<i<<" ";


    return 0;
}