#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n, q; cin>>n>>q;
        string s; cin>>s;
        vector<int> z(n,0);
        vector<int> inv(n,0);
        
        for(int i = 0; i < n; i++){
            if(i%2==0){
                if(s[i]=='1') z[i]++;
            }else{
                if(s[i]=='0') z[i]++;
            }
            if(i&&z[i]!=z[i-1])inv[i]++;
            if(i) inv[i]+=inv[i-1];
        }
        //for(int i = 0; i < n; i++) cout<<inv[i]<<" ";
        
        while(q--){
            int a, b, c; cin>>a>>b>>c;
            if((inv[b-1]-inv[a-1]+1)/2<=c) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
    }
    return 0;
}