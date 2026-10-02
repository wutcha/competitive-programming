#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(auto& i: v) cin>>i;
        bool works = true;
        int lo = 0, hi = n-1;
        while(lo < hi){
            while(lo < hi && v[lo]==lo+1){
                lo++;
            }
            while(lo < hi && v[hi]==hi+1){
                hi--;
            }
            if(lo==hi&&v[lo]!=lo+1){
                works = false;
            }else{
                swap(v[lo],v[hi]);
                lo++;
                hi--;
            }
        }
        for(int i = 0; i < n&&works; i++){
            if(v[i]!=i+1){
                works=false;
            }
        }
        cout<<(works?"Yes":"No")<<nl;
    }

    return 0;
}