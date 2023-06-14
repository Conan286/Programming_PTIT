#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans(int a[],int n)
{
int dp[n];
for(int i=0;i<n;i++) dp[i]=1;
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[j]<=a[i])
dp[i]=max(dp[i],dp[j]+1);
return n-*max_element(dp,dp+n);
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cout<<ans(a,n)<<endl;
}
}
