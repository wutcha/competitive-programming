#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    priority_queue<int,vector<int>,greater<int>> m;
    while (t--) {
        int a,b; cin>>a>>b;
        if(a==1){
            m.push(b);
        }else{
            while(!m.empty()&&m.top()<=b) m.pop();
        }
        cout<<m.size()<<nl;
    }

    return 0;
}