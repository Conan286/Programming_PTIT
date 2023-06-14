#include<bits/stdc++.h>
#include<queue>
using namespace std;
int v,e,vs[1001],x,y;
vector<int> adj[1001];
void bfs(int u)
{
vs[u]=1;
deque<int>q;
q.push_back(u);
while(!q.empty())
{
int k=q.front();
q.pop_front();
for(auto z:adj[k])
{
if(!vs[z])
{
vs[z]=1; q.push_back(z);
}
}
}
}
int count()
{
int cnt=0;
for(int i=1;i<=v;i++)
{
if(!vs[i])
{
++cnt;
bfs(i);
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
