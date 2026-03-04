#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        ll x, y; cin >>x>>y;
        if(y==0){
            cout << (x%3==0?"yes":"no");
        }else if(y<0){
            ll c = -1*y*4;
            cout << ((x-c)>=0&&(x-c)%3==0?"yes":"no");
        }else{
            ll c = y*2;
            cout << ((x-c)>=0&&(x-c)%3==0?"yes":"no");
        }
        cout << '\n';
    }

    return 0;
}