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
        vector<int> v;
        int c1 = -1, c2 = -1;
        for(int i = 0; i < 2*n; i++){
            int a; cin>>a;
            //cout<<a<<" ";
            v.push_back(a);
            if(a==0&&c1==-1) c1 =i;
            else if(a==0) c2 = i;
        }
        //cout<<nl;
        
        
        int lo = c1-1, hi = c1+1;
        set<int> s;
        while(lo >= 0 && hi < 2*n && v[lo]==v[hi]){
            s.insert(v[lo]);
            lo--;
            hi++;
        }
        int ret = 1;
        while(ret < n){
            if(!s.count(ret)) break;
            ret++;
        }
        lo = c2-1, hi = c2+1;
        s.clear();
        while(lo >= 0 && hi < 2*n && v[lo]==v[hi]){
            s.insert(v[lo]);
            lo--;
            hi++;
        }
        int r2 = 1;
        while(r2 < n){
            if(!s.count(r2)) break;
            r2++;
        }
        s.clear();
        
        lo = c1+1; 
        hi = c2-1;
        //cout<<lo<<" e "<<hi<< " "<<c1<<" "<<c2<<nl;
        bool palin = true;
        while(lo <= hi){
            if(lo==hi){
                s.insert(v[lo]);
                break;
            }
            if(v[lo]!=v[hi]){
                palin = false;
                break;
            }
            s.insert(v[lo]);
            lo++;
            hi--;
        }
        
        if(palin){
            lo = c1-1, hi = c2+1;
            while(lo >= 0 && hi < 2*n && v[lo]==v[hi]){
                s.insert(v[lo]);
                lo--;
                hi++;
            }
            r2 = 1;
            while(r2 < n){
                if(!s.count(r2)) break;
                r2++;
            }
            //for(auto i: s) cout<<i<<" ";
            //cout<<nl;
        }
        cout << max(ret,r2) << nl;
    }

    return 0;
}