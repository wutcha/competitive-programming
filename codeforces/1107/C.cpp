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
        string s;cin>>s;
        char c = s[0];
        bool sw = false;
        bool alt = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i]==c){
                if(sw){
                    alt = true;
                    break;
                }
            }else{
                if(!sw){
                    sw = true;
                }
            }
        }
        cout<<(alt||(!sw)?1:2)<<nl;

        
    }

    return 0;
}