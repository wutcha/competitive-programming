#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    map<int, int> comp;
    vector<pair<pair<int,int>,ll>> v;
    vector<int> coords;
    for(int i = 0; i < n; i++){
        int a, b;
        ll c; cin>>a>>b>>c;

        v.push_back({{a,b},c});
        coords.push_back(a);
        coords.push_back(b);
    }
    sort(coords.begin(),coords.end());
    sort(v.begin(),v.end(),[](const auto& a,const auto& b){
        return a.first.second<b.first.second;
    });
    int p = 1;
    for(auto i: coords){
        if(!comp.count(i)){
            comp[i]=p;
            p++;
        }
    }
    vector<ll> ret(p+1,0);
    int point = 0;
    for(int i = 1; i <= p; i++){
        ret[i]=ret[i-1];
        while(point < v.size() && comp[v[point].first.second]==i){
            ret[i] = max(ret[i],ret[comp[v[point].first.first]-1]+v[point].second);
            point++;
        }
    };
    cout<<ret[p];


    return 0;
}