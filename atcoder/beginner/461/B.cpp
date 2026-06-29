#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    bool yes = true;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        if(v[a-1]-1!=i){
            yes = false;
            break;
        }
    }
    cout<<(yes?"Yes":"No");

    return 0;
}