#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll n, k; cin>>n>>k;
        ll num = 2;
        ll sum = 1;
        while((num*2)-1<=n) {
            num*=2;
            sum++;
        }
        cout<<((sum)*k)<<nl;
    }

    return 0;
}