#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    map<int,int> m;
    int ret = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        if(m.count(a-1)){
            m[a] = m[a-1]+1;
        }else{
            m[a] = 1;
        }
        ret = max(m[a],ret);
    }
    cout<<ret;
    return 0;
}