#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> v;
        for(int i =0 ; i < n; i++){
            vector<int> add;
            int m; cin>>m;
            while(m--) {
                int p; cin>>p;
                auto f = find(add.begin(),add.end(),p);
                if(f==add.end()) add.emplace(add.begin(),p);
            }
            v.push_back(add);
        }
        
        vector<int> ret;
        for(auto i: v){
            for(int j = i.size()-1; j>=0;j--){
                auto f = find(ret.begin(),ret.end(),i[j]);
                if(f!=ret.end()){
                    ret.erase(f);
                }
                ret.emplace(ret.begin(),i[j]);
            }
        }
        for(auto i: ret) {
            cout << i << "e";
        }
        cout << "\n";
    }

    return 0;
}