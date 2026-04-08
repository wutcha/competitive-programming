#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        m[a] = i;
    }
    int c = 1; 
    for(int i = 1; i<n; i++){
        if(m[i+1]<m[i]) c++;
    }
    cout<<c;

    return 0;
}