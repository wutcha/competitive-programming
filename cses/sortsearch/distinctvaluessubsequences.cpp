#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    map<int,int> map;
    ll sum = 1;
    ll mod = 1e9+7;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        map[a]++;
    }
    for(auto i: map){
        sum = (sum*(i.second+1)%mod);
    }
    cout << sum-1;

    return 0;
}