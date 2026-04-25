#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    int m,d; cin>>m>>d;
    if(m==1&&d==7||m==3&&d==3||m==5&&d==5||m==7&&d==7||m==9&&d==9) {
        cout<<"Yes";
    }else cout<<"No";
    

    return 0;
}