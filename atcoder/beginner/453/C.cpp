#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    int c = 0;
    vector<ll> v;
    vector<int> a(n);
    for(int i = 0; i < n; i++ ){
        ll a; cin>>a;
        v.push_back(a);
    }

    for(int i = 0; i < (1<<(n)); i++){
        int count = 0;
        int bit = i;
        ll pos = 1;
        for(int j = n-1; j>=0; j--){
            a[j] = bit%2;
            bit/=2;
        }
        //for(auto i: a) cout << i << " ";
        //cout<<nl;
        for(int j = 0; j < n; j++){
            ll p = pos;
            if(a[j]==0){
                pos -= v[j]*2;
                if(p>0&&pos<0) count++;
            }else{
                pos+=v[j]*2;
                if(p<0&&pos>0) count++;
            }
            //cout << c << " " << count << " " << p << " " << pos << nl;
        }
        c = max(c,count);
    }

    cout<<c;

    return 0;
}