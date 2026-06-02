#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q; cin>>n>>q;
    vector<int> v(n);
    map<int,int> m;
    int rem = 0;
    while(q--){
        int t, val; cin>>t>>val;
        if(t==1){
            val--;
            v[val]++;
            m[v[val]]++;
            if(m[v[val]]==n){
                rem++;
            }
        }else{
            cout<<m[val+rem]<<nl;
        }
    }

    return 0;
}