#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            ll a; cin>>a;
            v[i]=a-i;
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()), v.end());

        int l = 1;
        int ml = 1;
        //cout<<v.size()<<" vsize"<<nl;
        for(int i = 1; i < v.size(); i++){
            if(v[i]==v[i-1]+1){
                l++;
                ml = max(ml,l);
            }else{
                l = 1;
            }
        }
        cout<<ml<<nl;
        
    }

    return 0;
}