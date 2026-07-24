#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,k; cin>>n>>k;
    ll sum = 0;
    for(int i = 0; sum < k; i++){
        sum += (n+i);
        if(sum >= k){
            cout<<i;
            break;
        }
    }

    return 0;
}