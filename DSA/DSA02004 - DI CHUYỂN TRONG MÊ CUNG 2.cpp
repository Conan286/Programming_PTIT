#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#define N 101
using namespace std;
int a[N][N],vs[N][N],n;
vector<string>v;
void Try (int x,int y,string s)
{
if(!a[0][0] or ! a[n-1][n-1]) return;
if(x==n-1 and y==n-1) v.push_back(s);
if(a[x+1][y] and x!=n-1 and !vs[x+1][y])
{
vs[x][y]=1;
Try(x+1,y,s+"D");
vs[x][y]=0;
}
if(a[x][y+1] and y!=n-1 and !vs[x][y+1])
{
vs[x][y]=1;
Try(x,y+1,s+"R");
vs[x][y]=0;
}
if(a[x-1][y] and x!=0 and !vs[x-1][y])
{
vs[x][y]=1;
Try(x-1,y,s+"U");
vs[x][y]=0;
}
if(a[x][y-1] and y!=0 and !vs[x][y-1])
{
vs[x][y]=1;
Try(x,y-1,s+"L");
vs[x][y]=0;
}

}
void dsa02004dichuyentrongmecung2()
{
v.clear();
memset(vs,0,sizeof(vs));
cin>>n;
for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
Try(0,0,"");
if(v.size()<1) puts("-1");
else
{
sort(v.begin(),v.end());
for(auto x:v) cout<<x<<" "; cout<<"\n";
}
}
int main()
{
int t;
cin>>t;
while(t--)
dsa02004dichuyentrongmecung2();
}
