#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    if(n==1) cout << 1;
    else if(n==4) cout<< "2 4 1 3";
    else if(n<=3){
        cout << "NO SOLUTION";
    }else{
        for(int i = 1; i <= n; i+=2){
            cout<<i<<" ";
        }
        for(int i = 2; i <= n; i+=2){
            cout<<i<<" ";
        }
    }

    return 0;
}