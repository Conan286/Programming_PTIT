#include<bits/stdc++.h>
using namespace std;
int ans(int a[],int n)
{
int res=a[0]+a[1];
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
res=(abs(a[i]+a[j])<abs(res))?(a[i]+a[j]):res;
return res;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cout<<ans(a,n)<<endl;
}
}
