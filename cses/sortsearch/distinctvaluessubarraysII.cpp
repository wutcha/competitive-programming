#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin>>n>>k;
    map<int,int> m;
    vector<int> v;
    int lo = 0;
    ll ret = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
        m[a]++;
        while(lo < i && m.size()>k){
            m[v[lo]]--;
            if(m[v[lo]]==0) m.erase(v[lo]);
            lo++;
        }
        ret += (i-lo+1);
    }
    cout<<ret;

    return 0;
}