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
        string a,bb; cin>>a>>bb;
        vector<int> even;
        vector<int> odd;
        vector<int> b;
        for(int i = 0; i < n; i++){
            if(a[i]=='1'){
                if(i%2==0) even.push_back(i);
                else odd.push_back(i);
            }
            if(bb[i]=='1'){
                b.push_back(i);
            }
        }
        if(even.size()+odd.size()!=b.size()){
            //c1
            //cout<<"NO"<<nl;
            //c2
            cout<<(-1)<<nl;
            continue;
        }
        int o = 0, e = 0;
        bool valid = true;
        ll num = 0;
        for(auto i: b){
            if(i%2==0){
                if(e==even.size()){
                    valid = false;
                    break;
                }
                num += abs(i-even[e])/2;
                e++;
            }else{
                if(o==odd.size()){
                    valid = false;
                    break;
                }
                num += abs(i-odd[o])/2;
                o++;
            }
        }
        //C1
        // if(o!=odd.size()||e!=even.size()||!valid) cout<<"NO"<<nl;
        // else cout<<"YES"<<nl;

        //C2
        if(o!=odd.size()||e!=even.size()||!valid) cout<<(-1)<<nl;
        else cout<<num<<nl;
    }

    return 0;
}