#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h,w,q; cin >> h>>w>>q;
    while(q--){
        int type,v; cin>>type>>v;
        if(type==1){
            cout << v*w << nl;
            h-=v;
        }else{
            cout << v*h<<nl;
            w-=v;
        }
    }

    return 0;
}