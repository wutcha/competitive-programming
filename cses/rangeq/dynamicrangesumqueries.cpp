#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

template <typename T>
struct BIT {
    int n;
    vector<T> arr;
    
    BIT(const vector<T>& a) {
        n = a.size();
        arr = vector<T>(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            add(i, a[i - 1]);
        }
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
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    BIT<ll> bit(v);
    while(q--){
        int a, b, c; cin>>a>>b>>c;
        if(a==1){
            bit.add(b,c-v[b-1]);
            v[b-1]=c;
        }else{
            cout<<bit.range(b,c)<<nl;
        }
    }

    return 0;
}