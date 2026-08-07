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
        
        int lo = 0, hi = n-1;
        while(lo < n && s[lo]=='0') lo++;
        while(hi>=0 && s[hi]=='1') hi--;

        if(hi<lo) cout<<"Bob"<<nl;
        else if((hi-lo+1)%2==1) cout<<"Alice"<<nl;
        else{
            bool check = true;
            for(int i = lo; i < hi; i+=2){
                if(s[i]!=s[i+1]) {
                    check = false;
                    break;
                }
            }
            cout << (check?"Bob":"Alice")<<nl;
        }
    }

    return 0;
}