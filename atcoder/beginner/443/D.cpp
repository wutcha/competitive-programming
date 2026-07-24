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
        vector<int> v;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            v.push_back(a);
            pq.push({a,i});
        }
        vector<int> ret(n,-1);
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            int val = top.first, ind = top.second;
            //cout<<ind<< " "<<val<<nl;
            if(ret[ind]!=-1) continue;
            
            ret[ind] = val;

            if(ind>0){
                pq.push({val+1,ind-1});
            }
            if(ind<n-1){
                pq.push({val+1,ind+1});
            }
            
        }
        ll sum = 0;
        for(int i = 0; i < n; i++) sum += v[i]-ret[i];
        cout<<sum<<nl;
    }

    return 0;
}