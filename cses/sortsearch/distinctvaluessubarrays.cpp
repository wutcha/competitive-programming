#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;

    vector<int> v;
    map<int,int> map;
    ll sum = 0;
    int lo = 0;
    
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        
        map[a]++;
        while(lo < i && i-lo+1!=map.size()){
            map[v[lo]]--;
            if(map[v[lo]]==0) map.erase(v[lo]);
            lo++;
        }
        v.push_back(a);
        sum += i-lo+1;
    }
    cout<<sum;

    return 0;
}