#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

struct dsu{
    vector<int> parent, size;
    dsu(int n){
        parent.resize(n);
        size.resize(n);
        
        iota(parent.begin(),parent.end(),0);
        fill(size.begin(),size.end(),1);
    }
    int root(int x){
        if(parent[x]==x) return x;
        parent[x] = root(parent[x]);
        return parent[x];
    }
    bool merge(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx==ry) return false;
        if(size[rx]<size[ry]) return merge(ry,rx);
        size[rx]+=size[ry];
        parent[ry]=rx;
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin>>n>>m;
    dsu d(n+1);
    int c = n-1;
    for(int i = 0; i < m; i++){
        int a,b; cin>>a>>b;
        if(d.merge(a,b)){
            c--;
        }
    }
    cout<<c<<nl;
    for(int i = 1; i <= n; i++){
        if(d.merge(1,i)){
            cout<<1<<" "<<i<<nl;
        }
    }
    

    return 0;
}