#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;
    if((n+1)/2>=m) cout << "Yes";
    else cout <<"No";
    cout<<nl;

    return 0;
}