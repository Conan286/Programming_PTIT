#include<bits/stdc++.h>
#define N 1001
using namespace std;
int r,c;
int a[N][N];
int t[N][N];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int bfs()
{
deque<pair<int,int>>dq;
for(int i=1;i<=r;i++)
for(int j=1;j<=c;j++)
if(a[i][j]==2)
dq.push_back({i,j});
while(dq.size())
{
int i=dq.front().first;
int j=dq.front().second;
dq.pop_front();
for(int k=0;k<4;k++)
{
int x=dx[k]+i;
int y=dy[k]+j;
if(x>=1 && x<=r && y>=1 && y<=c && a[x][y]==1 && t[x][y]==-1)
{
t[x][y]=t[i][j]+1;
dq.push_back({x,y});
}
}
}
int ans=-1;
for(int i=1;i<=r;i++)
for(int j=1;j<=c;j++)
{
if(a[i][j]==1 && t[i][j]==-1) return -1;
ans=max(ans,t[i][j]);
}
return ans;
}
int main()
{
int T;
cin>>T;
while(T--)
{
memset(t,-1,sizeof(t));
cin>>r>>c;
for(int i=1;i<=r;i++)
for(int j=1;j<=c;j++){
cin>>a[i][j];
if(a[i][j]==2) t[i][j]=0;
}
cout<<bfs()<<"\n";
}
}
