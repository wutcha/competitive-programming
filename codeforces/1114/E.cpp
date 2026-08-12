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
        vector<ll> pos;
        map<ll,int> neg;
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            ll a; cin>>a;
            if(a>0) pos.push_back(a);
            else neg[a]++;
            sum+=a;
        }
        if(sum<=0){
            cout<<-1<<nl;
            continue;
        }
        sort(pos.begin(),pos.end());
        vector<ll> pr;
        int lo = 0, hi = neg.size()-1;
        int p = 1;
        //pr.push_back(pos[0]);
        ll cur = pos[0];
        cout<<cur<<" ";
        n--;
        while(n--){
            auto it = neg.upper_bound(-1*cur);
            if(it!=neg.end()){
                cur+=(it->first);
                it->second--;
                if(it->second==0) neg.erase(it->first);
            }else{
                cur+=pos[p];
                p++;
            }
            cout<<cur<<" ";
        }
        cout<<nl;

    }

    return 0;
}