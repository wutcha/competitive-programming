#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin>>s;
    char cur = ' ';
    int count = 0;
    int ret = 1;
    for(auto i: s){
        if(i==cur) {
            count++;
            ret = max(ret,count);
        }else{
            count = 1;
            cur = i;
        }
    }
    cout<<ret;
    return 0;
}