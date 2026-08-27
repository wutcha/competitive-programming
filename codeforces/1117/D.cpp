#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        ll s;
        int q; 
        cin>>s>>q;

        vector<ll> v;
        for(ll i = 1; i*i<=s; i++){
            if(s%i==0){
                v.push_back(i);
                if(i*i!=s) v.push_back(s/i);
            }
        }
        v.push_back(0);
        sort(v.begin(),v.end());
        vector<ll> suf(v.size());
        for(int i = v.size()-2; i>=0; i--){
            suf[i] = suf[i+1] + s/v[i+1] * (v[i+1]-v[i]);
            //cout<<suf[i]<<nl;
        }
        ll total = suf[0];
        while(q--){
            ll a,b; cin>>a>>b;
            
            auto ita = upper_bound(v.begin(),v.end(),a);
            auto lower_ita = lower_bound(v.begin(),v.end(),a);
            ll sum = 0;
            if(lower_ita!=v.end()&&ita!=v.end()){
                if(s/(*lower_ita)>=b){
                    cout<<(a*b)<<nl;
                    continue;
                }
                sum = ((*ita-a)*(s/(*ita))+suf[ita-v.begin()]);
                //cout<<sum<<" "<<t<<nl;
            }
            auto itb = upper_bound(v.begin(),v.end(),b);
            if(itb!=v.end()){
                sum += ((*itb-b)*(s/(*itb))+suf[itb-v.begin()]);
            }
            //cout<<sum<<" "<<t<<nl;
            cout<<(total-sum)<<nl;
        }

        // 0 1 2 3 6     v.size=5
        //14 8 5 3 0 0    
        // 0 1 2 3 4 5

    }

    return 0;
}