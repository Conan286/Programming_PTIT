#include<bits/stdc++.h>
using namespace std;
int d,c,x,y,tplt;
vector<int> adj[1001];
bool vs[1001];
void dfs(int u)
{
vs[u]=1;
for(int ke: adj[u])
if(!vs[ke])
dfs(ke);
}
void dfs2(int u,int v)
{
vs[u]=1;
for(int ke: adj[u])
{
if(!vs[ke] && ke!=v)
dfs2(ke,v);
}
}
int main()
{
int t;
cin>>t;
while(t--){
memset(vs,0,sizeof(vs));
for(int i=0;i<1001;i++) adj[i].clear();
cin>>d>>c;
for(int i=0;i<c;i++)
{
cin>>x>>y;
adj[y].push_back(x);
adj[x].push_back(y);
}
tplt=0;
for(int i=1;i<=d;i++)
if(!vs[i])
{
++tplt;
dfs(i);
}
memset(vs,0,sizeof(vs));
for(int i=1;i<=d;i++)
{
int cnt=0;
memset(vs,0,sizeof(vs));
for(int j=1;j<=d;j++)
{
if(j==i) continue;
else if(!vs[j])
{
++cnt;
dfs2(j,i);
}
}
if(cnt>tplt) cout<<i<<" ";
}
cout<<"\n";
}
}
