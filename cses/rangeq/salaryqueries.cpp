#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

template <typename T>
struct BIT {
    int n;
    vector<T> arr;
    
    BIT(int size) {
        n = size;
        arr = vector<T>(n + 1, 0);
    }

    void add(int k, T x) {
        while (k <= n) {
            arr[k] += x;
            k += k & -k;
        }
    }

    T query(int k) {
        T s = 0;
        while (k >= 1) {
            s += arr[k];
            k -= (k & -k);
        }
        return s;
    }

    T range(int l, int r) {
        return query(r) - query(l - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q; cin>>n>>q;
    vector<int> v;
    vector<int> coord;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
        coord.push_back(a);
    }
    vector<pair<char,pair<int,int>>> que;
    while(q--){
        char c; cin>>c;
        int a, b; cin>>a>>b;
        que.push_back({c,{a,b}});
        coord.push_back(a);
        coord.push_back(b);
    }
    sort(coord.begin(),coord.end());
    coord.erase(unique(coord.begin(),coord.end()), coord.end());
    //for(auto i: coord) cout<<i<<" ";
    //cout<<nl;
    BIT<int> bit(coord.size());
    for(int i: v){
        auto pos = lower_bound(coord.begin(),coord.end(), i) - coord.begin()+1;
        bit.add(pos,1);
    }
    //for(int i = 1; i <= coord.size(); i++) cout<<bit.query(i)<<" ";
    for(const auto& i: que){
        char c = i.first;
        int a = i.second.first;
        int b = i.second.second;
        if(c=='?'){
            auto pos1 = lower_bound(coord.begin(),coord.end(), a) - coord.begin()+1;
            auto pos2 = lower_bound(coord.begin(),coord.end(), b) - coord.begin()+1;
            cout<<bit.range(pos1,pos2)<<nl;
        }else{
            auto pos1 = lower_bound(coord.begin(),coord.end(), v[a-1]) - coord.begin()+1;
            auto pos2 = lower_bound(coord.begin(),coord.end(), b) - coord.begin()+1;
            bit.add(pos1,-1);
            bit.add(pos2, 1);
            v[a-1]=b;
        }
    }
    

    return 0;
}