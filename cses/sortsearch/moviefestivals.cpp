#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<pair<int,pair<int,int>>> v;
int arr[200005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;

    for(int i = 0; i < n; i++){
        int a,b;cin>>a>>b;
        v.push_back({a,{1,i}});
        v.push_back({b,{-1,i}});
    }
    sort(v.begin(),v.end(), [](pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
        return a.first==b.first?(a.second.first<b.second.first):a.first<b.first;
    });
    int ret = 0;

    for(auto i: v){
        if(i.second.first<0){
            //cout<<"aaa"<<nl;
            ret = max(ret,arr[i.second.second]);
        }else{
            //cout<<"eee"<<nl;
            arr[i.second.second] = ret+1;
        }
    }
    cout<<ret;
    return 0;
}