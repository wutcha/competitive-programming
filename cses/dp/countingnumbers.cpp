#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

ll dp[19][10][2];
string num;

void memo(){

}

ll nonadj(ll a){
    num = to_string(a);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a, b; cin>>a>>b;
    cout<<(nonadj(b)-nonadj(a-1));

    return 0;
}