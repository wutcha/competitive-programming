#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        int n; cin>>n;
        int lo = 1;
        int hi = 3*n;
        while(lo < hi){
            cout << lo << " " << hi << " " << hi-1 << " ";
            lo++;
            hi-=2;
        }

        cout<<nl;
    }

    return 0;
}