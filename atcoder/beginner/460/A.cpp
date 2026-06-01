#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin>>n>>m;
    int c = 0;
    while(n%m!=0){
        m = n%m;
        c++;
    }
    cout<<c+1;

    return 0;
}