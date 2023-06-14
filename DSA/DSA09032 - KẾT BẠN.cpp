#include<bits/stdc++.h>
#define N 100001
using namespace std;
vector<int> adj[N];
bool vs[N];
int cnt=0;
void dfs(int u)
{
++cnt;
vs[u]=1;
for(int x:adj[u])
if(!vs[x])
dfs(x);
}
int main()
{
int t,n,m,x,y;
cin>>t;
while(t--)
{
for(int i=0;i<N;i++) adj[i].clear();
memset(vs,false,sizeof(vs));
cin>>n>>m;
for(int i=0;i<m;i++)
{
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
int ans=1;
for(int i=1;i<=n;i++)
{
cnt=0;
if(!vs[i])
dfs(i);
ans=max(ans,cnt);
}
cout<<ans<<endl;
}
}

