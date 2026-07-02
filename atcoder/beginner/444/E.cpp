#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,d; cin>>n>>d;
    ll sum = 0;
    
    set<ll> s;
    vector<ll> v;
    int lo = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a; v.push_back(a);
        while(i > lo && s.count(a)){
            //cout<<"E"<<nl;
            s.erase(v[lo]);
            lo++;
        }
        s.insert(a);
        auto it = s.find(a);
        
        while(i > lo && s.size()>1 && ((it!=s.begin()&&abs(*prev(it,1)-a)<d) || (it!=prev(s.end(),1)&&abs(*next(it)-a)<d))){
            s.erase(v[lo]);
            lo++;
            it = s.find(a);
            //cout<<"E"<<i<<(i>lo)<<" "<<(it!=s.begin()&&abs(*prev(it,1)-a))<d)<<" "<<nl;
        }

        //cout<<i<<" "<<lo<<nl;
        sum += i-lo+1;
    }
    cout<<sum;

    return 0;
}