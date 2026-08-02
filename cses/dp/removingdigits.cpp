#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    vector<int> v(n+1,0);
    
    for(int i = 1; i <= n; i++){
        int j = i;
        int m = INT_MAX;
        while(j>0){
            int l = j%10;
            j/=10;
            if(l==0) continue;
            m = min(m,v[i-l]);
        }
        v[i]=m+1;
        //cout<<v[i]<<" "<<i<<nl;
    }
    cout<<v[n];


    return 0;
}