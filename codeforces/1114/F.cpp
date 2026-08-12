#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n),b(n);
        int x = 0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            x^=a[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
            x^=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ind = -1;
        bool tru = true;
        for(int i = 0; i < n; i++){
            if(a[i]!=b[i]){
                tru = false;
            }    
            if(a[i]==x){
                ind = i;
            }
        }
        if(tru) {
            cout<<"YES"<<nl;
        }else{
            for(int i = 0; i < n; i++){
                if(i==ind) continue;
                a[i]^=x;
            }
            sort(a.begin(),a.end());

            cout<<(a==b?"YES":"NO")<<nl;
        }
    }

    return 0;
}