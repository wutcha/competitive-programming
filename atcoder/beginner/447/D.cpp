#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin>>s;
    int a=0,b=0,c=0;
    for(auto i: s){
        if(i=='A'){
            a++;
        }else if(i=='B' && a>0){
            b++;
            a--;
        }else if(i=='C'&&b>0){
            c++;
            b--;
        }
    }
    cout<<c;

    return 0;
}