#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int n;
const int MAXN = 2e5 + 5;
ll arr[MAXN];
ll st[4*MAXN];

ll build(int cur, int start, int end){
    if(start==end){
        st[cur] = arr[start];
        return st[cur];
    }

    int mid = (start+end)/2;
    st[cur]=build(2*cur, start, mid) + build(2*cur+1, mid+1, end);
    return st[cur];
}

void update(int cur, int start, int end, int target, ll val){
    if(start==end){
        st[cur]=val;
        arr[target]=val;
        return;
    }

    int mid = (start+end)/2;
    if(target <= mid) update(2*cur, start, mid, target, val);
    else update(2*cur+1, mid+1, end, target, val);
    st[cur] = st[2*cur] + st[2*cur+1];
}

ll query(int cur, int start, int end, int l, int r){
    if(end < l || start > r) return 0;
    else if(l <= start && r>= end) return st[cur];
    int mid = (start+end)/2;
    return query(2*cur, start, mid, l, r) + query(2*cur+1, mid+1, end, l, r);
}

ll query(int l, int r) {
    return query(1,0,n-1,l,r);
}

void update(int target, ll val){
    update(1, 0, n-1, target, val);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m; cin>>n>>m;
    for(int i = 0; i < n; i++) cin>>arr[i];
    build(1,0,n-1);
    while(m--){
        int a; cin>>a;
        if(a==1){
            int i;
            ll v;
            cin>>i>>v;
            update(i,v);
        }else{
            int l,r; cin>>l>>r;
            cout<<query(l,r-1)<<nl;
        }
    }

    return 0;
}