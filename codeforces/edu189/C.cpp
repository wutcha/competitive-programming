#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        int n; cin>>n;
        string s1,s2; cin>>s1>>s2;
        int c = 0;
        for(int i = 0; i < n; i++){
            if(i==n-1){
                if(s1[i]!=s2[i]) c++;
                break;
            }

            bool r1 = s1[i]==s1[i+1], r2 = s2[i]==s2[i+1];

            if(r1&&r2){
                i++;
            }else if(s1[i]==s2[i]){

            }else if(r1&&!r2 || r2&&!r1) {
                c++;
                i++;
            }
            else {
                c++;
            }


        }
        cout<<c<<nl;
    }

    return 0;
}