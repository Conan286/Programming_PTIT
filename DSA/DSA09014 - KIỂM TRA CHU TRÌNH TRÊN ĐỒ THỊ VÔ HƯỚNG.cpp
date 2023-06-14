#include<bits/stdc++.h>
#define yes printf("YES\n");
#define no printf("NO\n");
using namespace std;
int v,e,x,y;
bool vs[1001];
vector<int> adj[1001];
bool dfs(int u,int far)
{
vs[u]=1;
for(int k:adj[u])
{
 if(!vs[k])
 {
 if(dfs(k,u)) return 1;
 }
 else if(k!=far) return 1;
}
return 0;
}
int main()
{
int t;
cin>>t;
while(t--)
{
for(int i=0;i<1001;i++) adj[i].clear();
cin>>v>>e;
for(int i=1;i<=e;i++){
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
memset(vs,false,sizeof(vs));
int ok=0;
for(int i=1;i<=v;i++)
if(!vs[i] && dfs(i,0)){
ok=1; break;
}
if(ok) yes
else no
}
}
