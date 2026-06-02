#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
   
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        if(s[0]<='c') cout<<2;
        else if(s[0]<='f') cout<<3;
        else if(s[0]<='i') cout<<4;
        else if(s[0]<='l') cout<<5;
        else if(s[0]<='o') cout<<6;
        else if(s[0]<='s') cout<<7;
        else if(s[0]<='v') cout<<8;
        else if(s[0]<='z') cout<<9;

    }

    return 0;
}