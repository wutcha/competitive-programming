#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<ll> v(n);
        for(auto& i: v) cin>>i;

        priority_queue<ll> pq;
        ll sum = 0;
        for(int i = 0; i < m-1; i++) {
            pq.push(v[i]);
            sum+=v[i];
        }
        ll mx = m*v[m-1]-sum;
        for(int i = m-1; i < n; i++){
            mx = max(mx, m*v[i]-sum);
            if(pq.empty()) continue;
            if(v[i]<pq.top()){
                sum -= pq.top();
                pq.pop();
                sum+=v[i];
                pq.push(v[i]);
            }
        }
        cout<<mx<<nl;
    }

    return 0;
}