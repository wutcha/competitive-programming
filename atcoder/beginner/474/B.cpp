#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    bool t = true;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        if((a-1)/10!=i/10) t = false;
    }
    cout<<(t?"Yes":"No")<<nl;

    return 0;
}