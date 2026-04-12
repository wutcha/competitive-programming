#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;  cin>>n;
    int m = 0;
    vector<string> v;
    for(int i =0 ; i < n; i++){
        string s; cin>>s;
        v.push_back(s);
        m = max(m,(int)s.length());
    }
    for(int i = 0; i < n; i++){
        string pr = "";
        for(int j = 0; j < (m-v[i].length())/2; j++){
            pr += '.';
        }
        for(auto i: v[i]) pr += i;
        
        for(int j = 0; j < (m-v[i].length())/2; j++){
            pr += '.';
        }
        cout<<pr<<nl;
    }

    return 0;
}