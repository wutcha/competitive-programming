#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int q; 
    ll v;
    cin>>q>>v;

    priority_queue<pair<ll,pair<ll,ll>>> pq;

    while(q--){
        int a; cin>>a;
        if(a==1){
            ll t,w; cin>>t>>w;
            pq.push({w-t,{t,w}});
        }else{
            ll t; cin>>t;
            if(pq.empty()){
                cout<<"-1"<<nl;
            }else{
                auto cur = pq.top();
                pq.pop();
                cout<<min(v,cur.second.second+t-cur.second.first)<<nl;

            }
        }
    }



    return 0;
}