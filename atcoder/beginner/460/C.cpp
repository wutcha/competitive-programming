#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m; cin>>n>>m;

    vector<int> a(n),b(m);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < m; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int c = 0;
    int poi = m-1;
    for(int i = n-1; i>=0; i--){
        while(poi>=0&&b[poi]>2*a[i]){
            poi--;
        }
        if(poi>=0){
            c++;
            poi--;
        }else{
            break;
        }
    }
    cout<<c;
    


    return 0;
}