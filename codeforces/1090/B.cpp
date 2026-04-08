#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--){
        vector<int> v;
        for(int i=0;i<7;i++){
            int a; cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int sum = 0;
        for(int i = 0; i < 6; i++){
            sum += -1*(v[i]);
        }
        sum+=v[6];
        cout<<sum<<nl;
    }

    return 0;
}