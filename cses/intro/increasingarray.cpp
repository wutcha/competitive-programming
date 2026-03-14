#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    ll tot = 0;
    ll prev = 0;
    while(n--){
        ll a; cin>>a;
        if(prev!=0 && prev > a){
            tot += prev-a;
        }
        prev = max(prev,a);
    }
    cout << tot;

    return 0;
}