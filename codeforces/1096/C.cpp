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
        vector<int> none,two,three,six;
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            if(a%6==0) six.push_back(a);
            else if(a%2==0) two.push_back(a);
            else if(a%3==0) three.push_back(a);
            else none.push_back(a);
        }
        for(auto i: six) cout<<i<<" ";
        for(auto i: two.size()<three.size()?two:three) cout<<i<<" ";
        for(auto i: none) cout<<i<<" ";
        for(auto i: two.size()<three.size()?three:two) cout<<i<<" ";
        cout<<nl;
        
    }

    return 0;
}