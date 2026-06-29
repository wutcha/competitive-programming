#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

vector<int> prime;
void sieve(){
    int s = 10000005;
    vector<int> check(s,0);
    for(int i = 2; i < s; i++){
        if(check[i]==0){
            prime.push_back(i);
            for(int j = i; j<s; j+=i){
                check[j]++;
            }
            
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();

    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int size = 0;
        int mx = 0;
        for(int i = 0; i < prime.size()&&n>1; i++){
            if(n%prime[i]==0){
                int c = 0;
                while(n%prime[i]==0){
                    c++;
                    n/=prime[i];
                }
                size++;
                mx+=c;
            }
        }
        cout<<(size+mx-1)<<nl;
    }

    return 0;
}