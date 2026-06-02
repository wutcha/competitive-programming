#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while (t--) {
        string s; cin>>s;
        vector<int> v(26);
        int m = 0;
        for(int i = 0; i < s.length(); i++){
            v[s[i]-'a']++;
            m = max(m,v[s[i]-'a']);
        }
        if(m>(s.length()+1)/2){
            cout<<"No"<<nl;
        }else{
            cout<<"Yes"<<nl;
            priority_queue<pair<int,char>> pq;
            for(int i = 0; i < 26; i++){
                if(v[i]) pq.push({v[i],static_cast<char>(i+'a')});
            }
            pair<int,char> prev = {-1,'l'};
            while(!pq.empty()){
                auto top = pq.top();
                pq.pop();
                cout<<top.second;
                top.first--;

                if(prev.first>0){
                    pq.push(prev);
                }
                prev = top;

            }
            if(prev.first>0) cout<<prev.second;
            cout<<nl;
        }

    }

    return 0;
}