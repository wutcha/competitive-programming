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
        string s; cin>>s;
        if(s[0]=='1'){
            int c = 0;
            for(auto i: s) c+=(i=='0');
            cout<<c<<nl;
        }else{
            vector<int> one(n+1);
            for(int i = 1; i <= n; i++){
                one[i]+=one[i-1]+(s[i-1]=='1');
            }
            int to = one[n];
            int m = INT_MAX;
            for(int i = 1; i <= n; i++){
                int zleft = i-one[i];
                int zright = n-to-zleft;
                m = min(m,one[i]+zright);
            }
            cout<<m<<nl;
        }
    }

    return 0;
}