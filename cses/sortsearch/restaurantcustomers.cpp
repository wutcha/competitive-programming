#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
vector<pair<int,int>> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    
    for(int i = 0; i < n; i++){
        int a,b; cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());
    int cur = 0;
    int m = 0;
    for(auto i: v){
        cur += i.second;
        m = max(m,cur);
    }
    cout<<m;

    return 0;
}