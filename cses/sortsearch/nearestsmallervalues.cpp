#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    stack<pair<int,int>> s;
    s.push({INT_MIN,0});
    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        while(s.top().first >= a) s.pop();
        cout<<s.top().second<<" ";
        s.push({a,i});
    }

    return 0;
}