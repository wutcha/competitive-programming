#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a,b; cin>>a>>b;
    int n = a.size();
    int p = 0;
    int d = 0;
    int total = 0;
    bool br = false;
    for(auto i: b){
        if(i=='A'){
            d++;
        }else{
            int c = 0;
            while(p<n && a[p]!=i){
                p++;
                c++;
            }
            if(p==n) {
                br = true;
                break;
            }
            total += abs(d-c);
            d=0;
            p++;
        }
    }
    int c = 0;
    while(p < n){
        if(a[p]!='A'){
            br = true;
            break;
        }else{
            c++;
        }
        p++;
    }
    total += abs(c-d);
    cout << (br ? -1 : total);
    return 0;
}