#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vs[1001];
void dfs(int u)
{
cout<<u<<" ";
vs[u]=1;
for(auto z:adj[u])
if(!vs[z])
dfs(z);
}
int main()
{
int t,e,v,u,x,y;
cin>>t;
while(t--)
{
for(int i=0;i<1001;i++) adj[i].clear();
memset(vs,0,sizeof(vs));
cin>>e>>v>>u;
for(int i=0;i<v;i++)
{
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
dfs(u);
cout<<endl;
}
}

