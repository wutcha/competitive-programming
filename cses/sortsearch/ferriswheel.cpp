#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<int> v;
int n, x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> x;

    for(int i = 0; i < n; i++){
        int a; cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    
    int lo = 0;
    int hi = n-1;
    int c = 0;
    while(lo<=hi){
        if(lo==hi){
            c++;
            break;
        }
        if(v[lo]+v[hi]<=x){
            c++;
            lo++;
            hi--;
        }else{
            c++;
            hi--;
        }
    }

    cout << c;

    return 0;
}