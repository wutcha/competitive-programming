#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;

    while(n!=1){
        cout << n << " ";
        if((n&1)==1) n = 3*n+1;
        else n>>=1;
    }
    cout<<1;

}