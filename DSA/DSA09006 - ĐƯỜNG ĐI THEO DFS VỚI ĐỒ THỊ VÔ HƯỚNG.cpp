#include<bits/stdc++.h>
using namespace std;
vector<int>a[1001];
map<int,int> vp;
bool vs[1001];
void dfs(int x,int y)
{
if(vs[y]) return;
vs[x]=1;
for(int i=0;i<a[x].size();i++)
if(!vs[a[x][i]]){
vp[a[x][i]]=x;
dfs(a[x][i],y);
}
}

void solve(int x,int y)
{
if(!vs[x]) {
printf("-1"); return;
}
stack<int>stk;
while(x!=y)
{
stk.push(x);
x=vp[x];
}
stk.push(y);
while(!stk.empty())
{
cout<<stk.top()<<" ";
stk.pop();
}
}
int main()
{
int t;
int v,e,u,nguon,dich,m,n;
cin>>t;
while(t--)
{
for(int i=0;i<1001;i++) a[i].clear();
memset(vs,false,sizeof(vs));
vp.clear();
cin>>v>>e>>nguon>>dich;
for(int i=1;i<=e;i++)
{
cin>>m>>n;
a[m].push_back(n);
a[n].push_back(m);
}
dfs(nguon,dich);
solve(dich,nguon);
cout<<endl;
}
}


