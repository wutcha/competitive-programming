#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        int x,y; cin>>x>>y;
        if(x>y || x==0 && y%2==0){
            cout << "NO" << nl;
        }else{
            cout << "YES" << nl;
            if((x+y)%2==0) x--;
            else y--;
            int v = 2;
            for(int i = 0; i < x; i++) {
                cout << 1 << " " << v << nl;
                cout << v << " " << v+1 << nl;
                v+=2;
            }
            y-=x;
            for(int i = 0; i < y; i++){
                cout << 1 << " " << v << nl;
                v++;
            }
        }
    }

    return 0;
}