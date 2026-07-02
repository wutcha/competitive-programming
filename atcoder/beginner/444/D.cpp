#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    int s = 400000;
    vector<ll> v(s,0);
    for(int i = 0; i < n;i ++){
        int a; cin>>a;
        v[s-a]++;
    }
    for(int i = 1; i < s; i++){
        v[i]+=v[i-1];
    }
    for(int i = s-1; i > 0; i--){
        v[i-1]+=v[i]/10;
        v[i]-=((v[i]/10)*10);
    }
    bool start = false;
    
    for(int i = 0; i < s; i++){
        if(start||v[i]!=0) {
            cout<<v[i];
            start = true;
        }
    }
    

    return 0;
}