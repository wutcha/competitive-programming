#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k;cin>>n>>k;
    int ret = 0;
    
    if(k>45){
        cout<<0;
        return 0;
    }

    for(int i = 1; i<=n; i++){
        int j = i;
        int sum = 0;
        while(j>0){
            sum += (j%10);
            j/=10;
        }
        ret += (sum==k);
    }
    cout<<ret;
    return 0;
}