#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int n;
bool v[500001];
int to[500001];
int ret[500001];

vector<int> vec;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;

    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        to[i]=a;
    }

    for(int i = 1; i <= n; i++){
        if(v[i]) continue;
        vec.clear();
        int cur = i;
        while(true){
            if(v[cur]){
                if(ret[cur]){

                }else{
                    
                }
            }else{
                v[cur] = true;
                vec.push_back(cur);
                cur = to[cur];
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << ret[i] << " ";
    }
    cout<<nl;

}