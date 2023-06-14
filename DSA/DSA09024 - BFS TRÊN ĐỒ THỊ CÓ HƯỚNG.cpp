#include<bits/stdc++.h>
using namespace std;
vector<int>a[1001];
bool vs[1001];
int v,e,u,x,y;
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
for(auto z:a[k])
{
if(!vs[z])
{
cout<<z<<" "; vs[z]=1;
q.push_back(z);
}
}
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
for(int i=0;i<1001;i++) a[i].clear();
memset(vs,false,sizeof(vs));
cin>>v>>e>>u;
for(int i=1;i<=e;i++)
{
cin>>x>>y;
a[x].push_back(y);
}
bfs(u);
cout<<endl;
}
}


