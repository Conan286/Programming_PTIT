#include<bits/stdc++.h>
#define N 8
using namespace std;
int m,n,vs[501][501],a[501][501];
int dx[N]={-1,0,0,1,-1,-1,1,1};
int dy[N]={0,1,-1,0,-1,1,-1,1};
char x;
void dfs(int i,int j)
{
vs[i][j]=1;
for(int k=0;k<N;k++)
{
int i1=i+dx[k];
int j1=j+dy[k];
if(i1>=1 && i1<=m && j1>=1 && j1<=n && a[i1][j1] && !vs[i1][j1])
dfs(i1,j1);
}
}
void solve()
{
int ans=0;
cin>>m>>n;
for(int i=1;i<=m;i++)
for(int j=1;j<=n;j++)
{
cin>>x;
if(x=='W') a[i][j]=1;
else a[i][j]=0;
}
memset(vs,0,sizeof(vs));
for(int i=1;i<=m;i++)
for(int j=1;j<=n;j++)
if(a[i][j] && !vs[i][j])
{
++ans;
dfs(i,j);
}
cout<<ans<<endl;
}
int main()
{
solve();
}
