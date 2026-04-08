#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int c[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,l,r; cin>>n>>l>>r;
    string s; cin>>s;

    fill(begin(c),end(c),0);
    ll total = 0;
    int lo = 0;
    int hi = 0;
    for(int i = 0; i < n; i++){
        //cout<<c[s[i]-'a']<<nl;
        
        
        if(i-l>=0){
           c[s[hi]-'a']++;
            hi++;
        }
        if(i-r-1>=0){
            c[s[lo]-'a']--;
            lo++;
        }
        total += c[s[i]-'a'];
        
    }
    cout << total;
    return 0;
}