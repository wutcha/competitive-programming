#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

map<int,int> t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin>>n>>m;

    for(int i = 0; i < n; i++){
        int a; cin>>a;
        t[a]++;
    }
    for(int i = 0 ; i < m; i++){
        int a; cin>>a;
        auto p = t.upper_bound(a);
        if(p==t.begin()){
            cout<<-1<<nl;
        }else{
            p--;
            
            cout << (*p).first << nl;
            if((*p).second==1){
                t.erase((*p).first);
                p--;
            }else{
                t[(*p).first]--;
            }

        }
    }

    return 0;
}