#include<bits/stdc++.h>
#define yes printf("YES\n");
#define no printf("NO\n");
using namespace std;
bool vs[1001];
vector <int> ke[1001];
int d,c,x,y,tplt=0;

void bfs(int i)
{
vs[i]=1;
deque<int>dq;
dq.push_back(i);
while(dq.size())
{
int top=dq.front();
dq.pop_front();
for(int adj: ke[top])
if(!vs[adj])
{
vs[adj]=1;
dq.push_back(adj);
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
for(int i=0;i<1001;i++) ke[i].clear();
cin>>d>>c;
for(int i=0;i<c;i++)
{
cin>>x>>y;
ke[x].push_back(y);
}
tplt=0;
for(int i=1;i<=d;i++)
if(!vs[i])
{
++tplt;
bfs(i);
}
if(tplt>2) no
else yes
}
}
