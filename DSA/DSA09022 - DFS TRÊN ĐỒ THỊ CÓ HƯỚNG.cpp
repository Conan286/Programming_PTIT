#include<bits/stdc++.h>
using namespace std;
vector<int>a[1001];
bool vs[1001];
int v,e,u,x,y;
void dfs(int u)
{
cout<<u<<" ";
vs[u]=1;
for(auto z:a[u])
if(!vs[z])
dfs(z);
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
dfs(u);
cout<<endl;
}
}


