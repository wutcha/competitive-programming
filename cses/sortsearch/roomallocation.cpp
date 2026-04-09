#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<pair<int,pair<int,int>>> v;
    vector<int> inner(n), outer(n);

    for(int i = 0; i < n; i++){
        int a,b; cin>>a>>b;
        v.push_back({a,{1,i}});
        v.push_back({b,{2,i}});
    }
    sort(v.begin(),v.end());
    set<int> a;
    int num = 1;
    vector<int> ret(n);
    for(auto i: v){
        if(i.second.first==1){
            if(a.empty()){
                ret[i.second.second]=num;
                num++;
            }else{
                auto it = a.begin();
                ret[i.second.second] = *it;
                a.erase(it);
            }
        }else{
            a.insert(ret[i.second.second]);
        }
    }

    cout<<num-1<<nl;
    for(auto i: ret) cout<<i<<" ";

    return 0;
}