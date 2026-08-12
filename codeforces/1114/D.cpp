#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        map<ll,int> m;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            ll a; cin>>a;
            v.push_back(a);
            m[a]++;
        }
        map<ll,ll> remap;
        ll pval = -1;
        ll pcount = 0;
        ll pmap = 0;
        bool val = true;
        for(auto i: m){
            if(pval==-1){
                if(i.first!=0){
                    val = false;
                    break;
                }else{
                    pval = 0;
                    pcount = i.second;
                }
                continue;
            }
            ll diff = i.first-pval;
            if(diff%pcount!=0){
                val = false;
                break;
            }
            remap[pval]=diff/pcount;
            if(remap[pval]<=pmap){
                val = false;
                break;
            }

            pmap=remap[pval];
            pval = i.first;
            pcount = i.second;
        
        }
        remap[pval]=pmap+1;
        if(!val)cout<<-1<<nl;
        else{
            for(auto i: v){
                cout<<remap[i]<<" ";
            }
            cout<<nl;
        }
    }

    return 0;
}