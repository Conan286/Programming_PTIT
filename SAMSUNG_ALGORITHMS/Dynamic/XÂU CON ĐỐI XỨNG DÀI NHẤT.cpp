#include<bits/stdc++.h>
using namespace std;
int qhd(string s);
main()
{
int t,n,x=0,k;
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<qhd(s)<<endl;
}
}
int qhd(string s)
{
int n=s.size(),ans=1;
s=" "+s;
bool dp[n+1][n+1];
memset(dp,0,sizeof(dp));
for(int i=1;i<=n;i++)
dp[i][i]=1;
for(int len=2;len<=n;len++)
for(int i=1;i<=n-len+1;i++)
{
int j=i-1+len;
if(len==2 and s[i]==s[j])
dp[i][j]=1;
else
dp[i][j]=((s[i]==s[j]) and (dp[i+1][j-1]));
if(dp[i][j]) ans=max(ans,len);
}
return ans;
}
