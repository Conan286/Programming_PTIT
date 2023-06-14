#include<bits/stdc++.h>
using namespace std;
int v,e,vs[1001],x,y;
vector<int> adj[1001];
void dfs(int u)
{
vs[u]=1;
for(auto k: adj[u])
if(!vs[k])
dfs(k);
}
int count()
{
int cnt=0;
for(int i=1;i<=v;i++)
{
if(!vs[i])
{
++cnt;
dfs(i);
}
}
return cnt;
}
int main()
{
int t;
cin>>t;
while(t--)
{
memset(vs,0,sizeof(vs));
for(int i=0;i<1001;i++) adj[i].clear();
cin>>v>>e;
for(int i=0;i<e;i++)
{
cin>>x>>y;
adj[x].push_back(y); adj[y].push_back(x);
}
cout<<count()<<endl;
}
}
