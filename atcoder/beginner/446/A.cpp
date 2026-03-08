#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin>>s;
    transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c);});
    cout << "Of" << s;

    return 0;
}