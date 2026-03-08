#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; //cin >> t;
    while(t--){
        int n, x; cin >>n>>x;

        while(n--){
            int c; cin>>c;
            if(c<x){
                cout<<1;
                x=c;
            }else{
                cout<<0;
            }
            cout<<'\n';
        }
    }

    return 0;
}