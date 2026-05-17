#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

vector<string> s;
queue<pair<int,pair<int,int>>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m,0));
    pair<int,int> start;
    for(int i = 0; i < n; i++){
        string ss; cin>>ss;
        s.push_back(ss);
        for(int j = 0; j < m; j++){
            if(ss[j]=='M'){
                q.push({1,{i,j}});
            }else if(ss[j]=='A'){
                start = {i,j};
            }
        }
    }
    q.push({2,start});
    int count = 1;
    bool found = false;
    string ret;
    int co = 0;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            pair<int,pair<int,int>> cur = q.front();
            q.pop();
            int type = cur.first;
            int r = cur.second.first;
            int c = cur.second.second;
            //if(type==2)cout<<r<<" "<<c<<nl;
            if(r < 0 || r >= n || c < 0 || c >= m){
                if(type==2){
                    found = true;
                    if(r<0) r++;
                    if(r>=n) r--;
                    if(c<0) c++;
                    if(c>=m) c--;
                    while(v[r][c]!=1){
                        //cout<<r<<" e "<<c<<" a "<<v[r][c]<<" co:"<<co;
                        if(r>0&&v[r-1][c]==(v[r][c]-1)) {
                            //cout<<" "<<"D";
                            r--;
                            ret.push_back('D');
                        }else if(c>0&&v[r][c-1]==(v[r][c]-1)) {
                            //cout<<" "<<"R";
                            c--;
                            ret.push_back('R');
                        }else if(r<n-1&&v[r+1][c]==(v[r][c]-1)) {
                            //cout<<" "<<"U";
                            r++;
                            ret.push_back('U');
                        }else if(c<m-1&&v[r][c+1]==(v[r][c]-1)){
                            //cout<<" "<<"L";
                            c++;
                            //cout<<" "<<r<<" "<<c;
                            ret.push_back('L');
                        }
                    }
                    break;
                }else{
                    continue;
                }
            }
            if(found) break;
            if(s[r][c]=='#' || v[r][c] != 0){
                continue;
            }
            if(type==1){
                v[r][c]=-1;
                q.push({1,{r+1,c}});
                q.push({1,{r-1,c}});
                q.push({1,{r,c+1}});
                q.push({1,{r,c-1}});
            }else{
                v[r][c]=count;
                q.push({2,{r+1,c}});
                q.push({2,{r-1,c}});
                q.push({2,{r,c+1}});
                q.push({2,{r,c-1}});
            }
        }
        if(found) break;
        count++;
        co++;
    }

    if(!found){
        cout<<"NO";
    }else{
        cout<<"YES"<<nl<<ret.size()<<nl;
        reverse(ret.begin(),ret.end());
        cout<<ret;
    }

    return 0;
}