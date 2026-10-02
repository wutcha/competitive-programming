#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<(i%3==0?"Fizz": to_string(i))<<nl;
    }

    return 0;
}