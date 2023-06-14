#include<bits/stdc++.h>
#define N 1001
using namespace std;
vector<int> adj[N];
bool vs[N];
int cnt=0;
void dfs(int u)
{
vs[u]=1;
for(int x:adj[u])
if(!vs[x])
dfs(x);
}
void dfs2(int u,int i)
{
vs[u]=1;
for(int x:adj[u])
if(!vs[x] and x!=i)
dfs2(x,i);
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
int tplt=0;
for(int i=1;i<=n;i++)
{
if(!vs[i])
{
dfs(i);
++tplt;
}
}
for(int i=1;i<=n;i++)
{
memset(vs,false,sizeof(vs));
int l=0;
for(int j=1;j<=n;j++)
if(j!=i && vs[j]==0)
{
++l;
dfs2(j,i);
}
if(l>tplt) cout<<i<<" ";
}
cout<<"\n";
}
}

