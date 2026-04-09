#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    
    queue<int> q;
    for(int i = 1; i <= n; i++) q.push(i);

    int c = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        if(c%2==0) {
            q.push(v);
        }else{
            cout<<v<<" ";
        }
        c++;
    }


    return 0;
}