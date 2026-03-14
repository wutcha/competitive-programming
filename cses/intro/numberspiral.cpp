#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        int y,x; cin>>y>>x;
        ll m = max(y,x);
        ll v = m*m;
        if(m%2==0){
            int posx = 1;
            int posy = m;
            if(posy==y){
                while(posx!=x){
                    posx++;
                    v--;
                }
            }else{
                v-=(m-1);
                while(posy!=y){
                    posy--;
                    v--;
                }
            }
        }else{
            int posx = m;
            int posy = 1;
            if(posx==x){
                while(posy!=y){
                    posy++;
                    v--;
                }
            }else{
                v-=(m-1);
                while(posx!=x){
                    posx--;
                    v--;
                }
            }
        }
        cout<<v<<nl;
    }

    return 0;
}