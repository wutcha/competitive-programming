#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    vector<int> x(100001,0);
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        coins.push_back(a);
    }
    x[0]=1;
    for(auto i: coins){
        for(int j = 100000; j >= i; j--){
            x[j]=max(x[j],x[j-i]);
        }
    }
    vector<int> pr;
    for(int i = 1; i<= 100000; i++){
        if(x[i]>0) pr.push_back(i);
    }
    cout<<pr.size()<<nl;
    for(auto i: pr) cout<<i<<" ";

    return 0;
}