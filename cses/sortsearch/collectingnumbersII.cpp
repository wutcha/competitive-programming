#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;
    map<int,int> map;
    vector<int> v;
    v.push_back(0);
    map[0]=0;
    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        v.push_back(a);
        map[a] = i;
    }
    v.push_back(n+1);
    map[n+1]=n+1;
    int c = 1; 
    for(int i = 0; i<=n; i++){
        if(map[i+1]<map[i]) {
            c++;
            //cout<<i<<" e"<<nl;
        }
    }
    //cout<<c<<nl;
    for(int i = 0; i < m; i++){
        int x,y; cin>>x>>y;
        if(x>y) swap(x,y);
        int vx = v[x];
        int vy = v[y];

        if(vx==vy){
            cout<<c<<nl;
            continue;
        }

        if(abs(vx-vy)==1){
            if(vx>vy){
                c--;
                int xmax = map[vx+1];
                int ymin = map[vy-1];
                if(xmax > x && xmax < y) c++;
                if(ymin > x && ymin < y) c++;
            }else{
                c++;
                int xmin = map[vx-1];
                int ymax = map[vy+1];
                if(xmin > x && xmin < y) c--;
                if(ymax > x && ymax < y) c--;
            }
        }else{
            int xmin = map[vx-1];
            int xmax = map[vx+1];

            if(xmin > x && xmin < y) c--;
            if(xmax > x && xmax < y) c++;

            int ymin = map[vy-1];
            int ymax = map[vy+1];

            if(ymin > x && ymin < y) c++;
            if(ymax > x && ymax < y) c--;
        }
        swap(v[x],v[y]);
        map[vx] = y;
        map[vy] = x;
        //for(auto i: v) cout<<i<<" ";
        //cout<<nl;
        cout<<c<<nl;
    }

    return 0;
}