#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
using namespace std;
vector<int> adj[1001];
map<int,int>mp;
bool vs[1001];
void dfs(int u)
{
vs[u]=1;
for(auto k: adj[u])
if(!vs[k])
dfs(k);
}
int main()
{
int t,n,m,x,y,t1;
cin>>t;
while(t--)
{
mp.clear();
memset(vs,0,sizeof(vs));
for(int i=0;i<1001;i++) adj[i].clear();
cin>>n>>m;
for(int i=1;i<=m;i++)
{
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
cin>>t1;
while(t1--)
{
memset(vs,0,sizeof(vs));
cin>>x>>y;
dfs(x);
if(!vs[y]) no
else yes
}
}
}
