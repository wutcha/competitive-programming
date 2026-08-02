#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,x;cin>>n>>x;
    vector<int> v(x+1,-1);
    vector<int> price(n), pages(n);
    v[0]=0;
    int m = 0;
    for(int i = 0; i < n; i++) cin>>price[i];
    for(int i = 0; i < n; i++) cin>>pages[i];
    
    for(int i = 0; i < n; i++){
        for(int j = x; j>=price[i]; j--){
            if(v[j-price[i]]==-1) continue;
            v[j]=max(v[j],v[j-price[i]]+pages[i]);
            m = max(m,v[j]);
        }
    }
    cout<<m;


    return 0;
}