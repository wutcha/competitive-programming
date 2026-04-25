#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    string s; cin>>s;
    bool b = true;
    for(int i = 0; i < n; i++){
        if(s[i]!='o' || !b) {
            b = false;
            cout<<s[i];
        }
    }

    return 0;
}