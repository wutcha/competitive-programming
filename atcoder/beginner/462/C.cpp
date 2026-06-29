#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int,int>> v;
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int c = 1;
    int mn = v[0].second;
    for(auto i: v){
        if(i.second<mn){
            mn = i.second;
            c++;
        }
    }
    cout<<c;

    return 0;
}