#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int n;
const int MAXN = 2e5 + 5;
ll arr[MAXN];
ll st[4*MAXN];
ll pref[4*MAXN];
ll suf[4*MAXN];
ll mx[4*MAXN];

ll build(int cur, int start, int end){
    if(start==end){
        st[cur] = arr[start];
        pref[cur] = arr[start];
        suf[cur] = arr[start];
        mx[cur] = arr[start];
        return st[cur];
    }

    int mid = (start+end)/2;
    st[cur]=build(2*cur, start, mid) + build(2*cur+1, mid+1, end);
    pref[cur]=max(pref[2*cur],st[2*cur]+pref[2*cur+1]);
    suf[cur]=max(suf[2*cur+1],suf[2*cur]+st[2*cur+1]);
    mx[cur]=max(max(pref[cur*2],suf[cur*2+1]),max(pref[cur*2+1]+suf[cur*2],st[cur]));
    
    return st[cur];
}

void update(int cur, int start, int end, int target, ll val){
    if(start==end){
        st[cur] = arr[start];
        pref[cur] = arr[start];
        suf[cur] = arr[start];
        mx[cur] = arr[start];

        arr[target]=val;
        return;
    }

    int mid = (start+end)/2;
    if(target <= mid) update(2*cur, start, mid, target, val);
    else update(2*cur+1, mid+1, end, target, val);
    st[cur] = st[2*cur] + st[2*cur+1];
    pref[cur]=max(pref[2*cur],st[2*cur]+pref[2*cur+1]);
    suf[cur]=max(suf[2*cur+1],suf[2*cur]+st[2*cur+1]);
    mx[cur]=max(max(pref[cur*2],suf[cur*2+1]),max(pref[cur*2+1]+suf[cur*2],st[cur]));
}

void update(int target, ll val){
    update(1, 0, n-1, target, val);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m; cin>>n>>m;
    fill(st,st+n,INT_MIN);
    fill(pref,pref+n,INT_MIN);
    fill(suf,suf+n,INT_MIN);
    fill(mx,mx+n,INT_MIN);
    
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<max(mx[1],0LL)<<nl;
    build(1,0,n-1);
    while(m--){
        int i;
        ll v;
        cin>>i>>v;
        update(i,v);
        cout<<max(mx[1],0LL)<<nl;

    }

    return 0;
}