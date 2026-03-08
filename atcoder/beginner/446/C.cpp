#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1; cin >> t;
    while (t--) {
        int n, d; cin>>n>>d;
        int egg = 0;
        vector<int> a(n),b(n);

        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        
        queue<int> q;

        int sub = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < a[i]; j++) q.push(i);
            sub += b[i];
            while(!q.empty()&&sub>0){
                sub--;
                q.pop();
            }
            while(!q.empty() && i-q.front()>=d){
                q.pop();
            }
            
        }
        
        cout<<q.size()<<nl;


    }

    return 0;
}