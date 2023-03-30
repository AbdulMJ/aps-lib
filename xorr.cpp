#include <bits/stdc++.h>
using namespace std;
#define lng long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lng n=0,x=0,y=0,sum=0,count=0,i=0;
    cin>>n;
    if(n%2==1){
        cout<<0;
        return 0;
    }
    vector<vector<lng>> m(n+1);
    for(i=1;i<=n;i++){
        m[i] = vector<lng>(1,0);
    }

    for(i=0;i<n-1;i++){
        cin>>x>>y;
        m[x].push_back(y);
        m[y].push_back(x);
    }
    
    bool vis[n+1];
    memset(vis,0,(n+1)*sizeof(bool));

    lng q[n+n];
    lng f=1,r=1,u;
    q[r]=1;
    vis[1]=1;
    lng paths[n+1];
    paths[1]=0;
    sum=0;
    while(f<=r && count<n){
        u=q[f];
        f++;
        for(i=1;i<m[u].size();i++){
            if(vis[m[u][i]]==0){
            paths[m[u][i]]=(u+m[u][i])^paths[u];
            sum^=paths[m[u][i]];
            vis[m[u][i]]=1;
            count++;
            r++;
            q[r]=m[u][i];
            }
        }
    }
    cout<<sum;
    return 0;
}