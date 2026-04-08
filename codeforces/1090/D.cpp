#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<ll> v;
bool b[200001] = {0};

void sieve(){
    for(int i = 2; i < 200001; i++){
        if(!b[i]){
            v.push_back((ll)i);
            for(int j = i; j<200001; j+=i){
                b[j] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    v.clear();
    sieve();

    int t = 1; cin >> t;
    while(t--){
        int n; cin>>n;

        for(int i = 0; i < n; i++){
            cout << v[i]*v[i+1] << " ";
        }
        cout<<nl;
    }

    return 0;
}