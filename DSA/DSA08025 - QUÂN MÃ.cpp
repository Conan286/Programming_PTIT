#include<bits/stdc++.h>
using namespace std;
bool vs[9][9];
int cnt[9][9];
int xa,xb;
int ya,yb;
string a1,a2;
int dx[10]={-2,-2,2,2,1,1,-1,-1};
int dy[10]={-1,1,-1,1,-2,2,2,-2};
int bfs(int i,int j)
{
if(i==xb && j==yb) return cnt[i][j];
deque<pair<int,int>>dp;
dp.push_back({i,j});
vs[i][j]=1;
while(dp.size())
{
pair<int,int> top=dp.front();
dp.pop_front();
i=top.first,j=top.second;
if(i==xb && j==yb) return cnt[i][j];
for(int k=0;k<8;k++)
{
int x=i+dx[k];
int y=j+dy[k];
if(!vs[x][y] && x>0 && x<9 && y>0 && y<9)
{
vs[x][y]=1;
cnt[x][y]=cnt[i][j]+1;
dp.push_back({x,y});
}
}
}
return -1;
}
int main()
{
int t;
cin>>t;
while(t--)
{
memset(vs,false,sizeof(vs));
memset(cnt,0,sizeof(cnt));
cin>>a1>>a2;
xa=a1[0]-48-'0',xb=a2[0]-48-'0',ya=a1[1]-'0',yb=a2[1]-'0';
cout<<bfs(xa,ya)<<"\n";
}
}
