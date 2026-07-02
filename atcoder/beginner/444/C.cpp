#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    if(n==1){
        cout<<v[0];
        return 0;
    }
    sort(v.begin(),v.end());
    
    int mx = v[n-1];
    int hi = n-1;
    while(hi>=0&&v[hi]==mx) hi--;
    int lo = 0;
    if(hi==-1) cout<<mx<<" ";
    else{
        if(hi%2==1){
            bool check = true;
            while(lo < hi){
                if(v[lo]+v[hi]!=mx){
                    check = false;
                    break;
                }
                lo++;
                hi--;
            }
            if(check) cout<<mx<<" ";
        }
    }
    if(n%2==0){
        bool check = true;
        int sum = v[0] + v[n-1];
        lo = 1, hi = n-2;
        while(lo < hi){
            if(v[lo]+v[hi]!=sum){
                check = false;
                break;
            }
            lo++;
            hi--;
        }
        if(check) cout<<sum;
    }

    return 0;
}