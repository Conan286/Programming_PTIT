#include<bits/stdc++.h>
using namespace std;
int d,c,x,y,tplt;
vector<int> adj[1001];
vector<pair<int,int>>vp;
bool vs[1001];
void dfs(int u)
{
vs[u]=1;
for(int ke: adj[u])
if(!vs[ke])
dfs(ke);
}
void dfs2(int u,int g,int h)
{
vs[u]=1;
for(int ke: adj[u])
{
if((u==g&&ke==h)||(u==h&&ke==g)) continue;
if(!vs[ke]){
dfs2(ke,g,h);
}
}
}
int main()
{
int t;
cin>>t;
while(t--){
memset(vs,0,sizeof(vs));
for(int i=0;i<1001;i++) adj[i].clear();
vp.clear();
cin>>d>>c;
for(int i=0;i<c;i++)
{
cin>>x>>y;
adj[y].push_back(x);
adj[x].push_back(y);
vp.push_back({x,y});
}
tplt=0;
for(int i=1;i<=d;i++)
if(!vs[i])
{
++tplt;
dfs(i);
}
memset(vs,0,sizeof(vs));
for(int i=0;i<vp.size();i++)
{
int g=vp[i].first;
int h=vp[i].second;
int cnt=0;
memset(vs,0,sizeof(vs));
for(int j=1;j<=d;j++)
{
if(!vs[j] )
{
++cnt;
dfs2(j,g,h);
}
}
if(cnt>tplt) cout<<g<<" "<<h<<" ";
}
cout<<"\n";
}
}
