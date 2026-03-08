#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin>>s;
    int a[26] = {0};
    int m = 0;
    for(auto i: s){
        a[i-'a']++;
        m = max(m,a[i-'a']);
    }
    string ss;
    for(auto i: s){
        //cout << a[i-'a'] << " " << i << nl;
        if(a[i-'a']!=m) ss+=i;
    }
    cout<<ss;
    
    


    return 0;
}