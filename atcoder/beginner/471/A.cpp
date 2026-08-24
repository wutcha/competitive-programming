#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a,b; cin>>a>>b;
    cout<<(a+b==9||a-b==9||a*b==9||9*b==a?"Nine":"Nein")<<nl;

    return 0;
}