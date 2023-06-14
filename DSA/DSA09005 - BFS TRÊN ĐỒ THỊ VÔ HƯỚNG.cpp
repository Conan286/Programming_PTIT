#include<bits/stdc++.h>
#include<queue>
#include<deque>
using namespace std;
int v,e,u,x,y;
int vs[1001];
vector<int> a[1001];
void bfs(int u)
{
deque<int>q;
cout<<u<<" ";
vs[u]=1;
q.push_back(u);
while(!q.empty())
{
int k=q.front();
q.pop_front();
for(auto x: a[k])
if(!vs[x])
{
cout<<x<<" "; vs[x]=1;
q.push_back(x);
}
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
memset(vs,0,sizeof(vs));
for(int i=0;i<1001;i++) a[i].clear();

cin>>v>>e>>u;
for(int i=1;i<=e;i++)
{
cin>>x>>y;
a[x].push_back(y);
a[y].push_back(x);
}
bfs(u);
cout<<endl;
}
}
