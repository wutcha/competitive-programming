#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        if(n%2==0){
            for(int i = 1; i <= n; i+=2){
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i+1<<" ";
            }
        }else{
            cout<<"1 1 2 1 2 3 1 3 2 2 3 3 ";
            for(int i = 4; i <= n; i+=2){
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i+1<<" ";
            }
        }
        cout<<nl;
    }

    return 0;
}