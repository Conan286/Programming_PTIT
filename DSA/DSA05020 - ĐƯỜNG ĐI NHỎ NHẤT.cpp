#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[1001][1001],dp[1001][1001],vs[1001][1001];
int min3(int a,int b,int c)
{
return (a<b)?(a<c?a:c):(b<c?b:c);
}
int qhd(int i,int j)
{
dp[1][1]=a[1][1];
for(int i=2;i<=m;i++)
dp[i][1]=dp[i-1][1]+a[i][1];
for(int j=2;j<=n;j++)
dp[1][j]=dp[1][j-1]+a[1][j];
for(int i=2;i<=m;i++)
for(int j=2;j<=n;j++)
{
dp[i][j]=min3(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+a[i][j];
}
return dp[m][n];
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>m>>n;
for(int i=1;i<=m;i++)
for(int j=1;j<=n;j++)
cin>>a[i][j];
cout<<qhd(1,1)<<"\n";
}
}
