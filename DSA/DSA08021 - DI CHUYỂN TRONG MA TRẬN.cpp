#include<bits/stdc++.h>
#define ll long long
#define N 1005
using namespace std;
int n,sum,dem=0,m,check;
int a[N][N],step[N][N],vs[N][N];
void input();
int bfs(int i,int j);
int main()
{
int t; cin>>t; while(t--)
{
cin>>m>>n;
for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
memset(step,0,sizeof(step));
memset(vs,0,sizeof(vs));
cout<<bfs(1,1)<<"\n";
}
}
int bfs(int i,int j)
{
deque<pair<int,int>>q;
q.push_back(make_pair(i,j));
vs[i][j]=1;
while(q.size())
{
pair<int,int> k=q.front();
q.pop_front();
i=k.first,j=k.second;
if(i==m&&j==n) return step[i][j];
if(i+a[i][j]<=m && !vs[i+a[i][j]][j])
{
vs[i+a[i][j]][j]=1;
step[i+a[i][j]][j]=step[i][j]+1;
q.push_back(make_pair(i+a[i][j],j));
}
if(j+a[i][j]<=n && !vs[i][j+a[i][j]])
{
vs[i][j+a[i][j]]=1;
step[i][j+a[i][j]]=step[i][j]+1;
q.push_back(make_pair(i,j+a[i][j]));
}
}
return -1;
}

