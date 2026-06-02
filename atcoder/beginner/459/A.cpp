#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    n--;
    string s = "HelloWorld";
    for(int i = 0; i < s.length(); i++){
        if(i!=n)cout<<s[i];
    }

    return 0;
}