#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,x; cin>>t>>x;
    int prev = -1000000;
    for(int i = 0; i <= t; i++){
        int a; cin>>a;
        if(abs(prev-a)>=x){
            cout << i << " " << a << nl;
            prev = a;
        }
    }

    return 0;
}