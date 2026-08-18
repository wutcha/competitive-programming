#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n,q; cin>>n>>q;
        string s1,s2; cin>>s1>>s2;
        vector<int> a(n+1),b(n+1),one(n+1),zero(n+1);
        for(int i = 1; i<=n;i++){
            one[i]=(s1[i-1]=='1'&&s2[i-1]=='1'?1:0)+one[i-1];
            zero[i]=(s1[i-1]=='0'&&s2[i-1]=='0'?1:0)+zero[i-1];
            a[i]=(s1[i-1]=='1'&&s2[i-1]=='0'?1:0)+a[i-1];
            b[i]=(s1[i-1]=='0'&&s2[i-1]=='1'?1:0)+b[i-1];
        }
        while(q--){
            int l,r; cin>>l>>r;
            int zz = zero[r]-zero[l-1];
            int oo = one[r]-one[l-1];
            int aa = a[r]-a[l-1];
            int bb = b[r]-b[l-1];
            int s = r-l+1;
            if(abs(aa-bb)<=zz+oo) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
            //cout<<s<<" "<<aa<<" "<<bb<<" "<<nl;
        }
    }

    return 0;
}