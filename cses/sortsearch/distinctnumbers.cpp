#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<int> s;
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        s.insert(a);
    }
    cout<<s.size();

    return 0;
}