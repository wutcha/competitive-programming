#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    map<int,int> m;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        m[a]++;
        mx=max(mx,m[a]);
    }
    cout<< (n-mx);

    return 0;
}