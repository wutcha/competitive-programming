#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<int> v;
set<int> ind;
set<string> ret;
string s;
int n;

void num(int p){
    if(p==n){
        string cur(n,' ');
        for(auto i: v){
            cur[i] = v[i];
        }
        ret.insert(cur);
        cout<<cur<<nl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(ind.count(i)==0){
            v[p] = i-1;
            ind.insert(i-1);
            num(p+1);
            ind.erase(i-1);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

   cin>>s;
    n = s.size();
    v = vector<int>(n);
    num(0);
    /*
    for(auto i: ret){
        cout<<i<<nl;
    }
    */

    return 0;
}