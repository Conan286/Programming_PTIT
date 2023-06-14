#include<bits/stdc++.h>
#define yes printf("YES\n");
#define no printf("NO\n");
using namespace std;
int v,e,x,y;
int color[1001];
vector<int> adj[1001];
bool dfs(int u)
{
color[u]=1;
for(int k:adj[u])
{
 if(!color[k])
 {
 if(dfs(k)) return 1;
 }
 else if(color[k]==1) return 1;
}
color[u]=2;
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
}
memset(color,0,sizeof(color));
int ok=0;
for(int i=1;i<=v;i++){
if(!color[i] && dfs(i)){
ok=1; break;
}
}
if(ok) yes
else no
}
}
