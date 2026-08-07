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
        string s; cin>>s;
        int total = 0;
        int l = 0;
        for(char c: s){
            if(c=='*'){
                total=max(total,(l+1)/2);
                l = 0;
            }else{
                l++;
            }
        }
        total=max(total,(l+1)/2);
        cout<<total<<nl;
    }

    return 0;
}