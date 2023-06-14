#include<bits/stdc++.h>
#define ll long long
using namespace std;
void dsa05018(string a)
{
a.insert(0,"0");
int n=a.size(),ans=1;
int dp[n][n];
memset(dp,0,sizeof(dp));
for(int i=0;i<n;i++) dp[i][i]=1;
for(int len=2;len<n;len++)
for(int j=1;j<=n-len;j++)
{
int l=j,r=j+len-1;
if(len==2&&a[l]==a[r]) {dp[l][r]=1; ans=max(ans,len);}
else if(a[l]==a[r]&&dp[l+1][r-1]) {dp[l][r]=1; ans=max(ans,len);}
}

cout<<ans<<endl;
}

int main()
{
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
dsa05018(s);
}
}

