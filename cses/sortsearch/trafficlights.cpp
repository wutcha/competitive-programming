#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x,n; cin>>x>>n;
    set<int> s;
    s.insert(0);
    s.insert(x);
    vector<int> v;
    for(int i = 0; i< n; i++){
        int a; cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    for(int i = 0;; i++){
        
    }


    return 0;
}