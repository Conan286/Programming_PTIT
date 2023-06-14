#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vs[1001];
int m,n,x,y;
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>m>>n;
int bv[n+1],br[n+1];
for(int i=0;i<1001;i++) adj[i].clear();
memset(vs,false,sizeof(vs));
memset(bv,0,sizeof(bv));
memset(br,0,sizeof(br));
for(int i=1;i<=n;i++)
{
cin>>x>>y;
bv[y]++;
br[x]++;
adj[x].push_back(y);
}
int check=1;
for(int i=1;i<=n;i++) if(br[i]!=bv[i]) check=0;
cout<<check<<"\n";
}
}
