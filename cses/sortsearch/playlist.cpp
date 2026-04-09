#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    map<int,int> m;
    vector<int> v;
    int lo = 0;
    int count = 0;
    int ret = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
        m[a]++;
        if(m[a] == 1) count++;
        
        while(count != i-lo+1){
            m[v[lo]]--;
            if(m[v[lo]]==0) count--;
            lo++;
        }
        ret = max(ret,i-lo+1);
    }
    cout <<ret;
    

    return 0;
}