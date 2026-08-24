#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        for(char& c: s){
            c = tolower(c);
        }   
        mp[s]++;
    }
    int mx = 0;
    for(auto& [i, j]: mp){
        mx = max(mx,j);
    }
    cout<<mx;

    return 0;
}