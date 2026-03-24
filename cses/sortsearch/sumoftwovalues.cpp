#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

map<int,int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,x; cin>>n>>x;
    bool b = false;
    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        if(m.count(x-a)){
            cout << i << " " << m[x-a];
            b = true;
            break;
        }
        m[a]=i;
    }
    if(!b) cout << "IMPOSSIBLE";

    return 0;
}