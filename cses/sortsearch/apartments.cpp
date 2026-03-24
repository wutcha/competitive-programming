#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<int> v, ap;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,k; cin>>n>>m>>k;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    for(int i = 0; i < m; i++){
        int a; cin>>a;
        ap.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(ap.begin(),ap.end());
    
    int p = 0;
    int c = 0;
    for(auto i: v){
        while(p < m && ap[p]<i-k){
            p++;
        }
        if(p==m) break;
        if(ap[p]<=i+k){
            c++;
            p++;
        }
    }
    cout<<c;

    return 0;
}