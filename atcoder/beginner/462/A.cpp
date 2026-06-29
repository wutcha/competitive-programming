#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin>>s;
    for(auto i: s){
        if(i>='0'&&i<='9') cout<<i;
    }

    return 0;
}