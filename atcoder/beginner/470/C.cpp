#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q; cin>>n>>q;
    vector<int> v(n,0);
    set<int> ind;
    int sum = 0;
    while(q--){
        int a; cin>>a;
        if(a==1){
            int b; cin>>b;
            b--;
            if(v[b]==0) ind.insert(b);
            sum^=(v[b])^(v[b]+1);
            v[b]++;

        }else{
            set<int> nset;
            for(auto i : ind){
                sum^=(v[i]^(v[i]-1));
                v[i]--;
                if(v[i]!=0) nset.insert(i);
            }
            ind = nset;
        }
        
        cout<<sum<<nl;
    }

    return 0;
}