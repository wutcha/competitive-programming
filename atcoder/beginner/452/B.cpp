#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((j>0&&j<m-1)&&(i>0&&i<n-1)) cout<<".";
            else cout<<"#";
        }
        cout<<nl;
    }

    return 0;
}