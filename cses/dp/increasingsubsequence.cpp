#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        auto it = lower_bound(v.begin(),v.end(),a);
        if(it==v.end()){
            v.push_back(a);
        }else if(*it != a){
            *it = a;
        }
    }
    cout<<v.size();

    return 0;
}