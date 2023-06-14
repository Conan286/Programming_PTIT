#include<bits/stdc++.h>
#define ll long long
#define N 1005
using namespace std;
void bitonic(int a[],int n)
{
int l[n];
int r[n];
for(int i=0;i<n;i++) l[i]=r[i]=a[i];
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[i]>a[j])
l[i]=max(l[i],l[j]+a[i]);
int ans=0;
for(int i=0;i<n;i++) ans=max(ans,l[i]);
cout<<ans<<"\n";
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
bitonic(a,n);
}
}
