#include <bits/stdc++.h>

using namespace std;

#define ll long long
set<int> s;

void sieve(){
    bool visited[40000];
    for(int i = 2; i < 40000; i++){
        if(!visited[i]){
            s.insert(i);
            for(int j = i; j < 40000;j+=i){
                visited[j] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t = 1; cin >> t;
    while(t--){
        ll n; cin>>n;
        vector<int> div;
        ll ret = 1;
        for(auto i: s){
            if(n%i==0){
                ret*=i;
                while(n%i==0) n/=i;
            }
        }
        ret*=n;
        cout<<ret<<'\n';
    }

    return 0;
}