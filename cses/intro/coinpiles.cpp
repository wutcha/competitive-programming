#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        int a,b; cin>>a>>b;
        if(a<b) swap(a,b);
        if(a==b) {
            cout<<(a%3==0?"YES":"NO")<<nl;
            continue;
        }
        
        cout<<(a%3==0&&b%3==0?"YES":"NO")<<nl;

    }

    return 0;
}