#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int find(int a[],int b[],int n)
{
for(int i=0;i<n-1;i++) if(a[i]!=b[i]) return i;
return n-1;
}
main()
{
int t,m,n,k;
cin>>n;
int a[n],l[n];
input(a,n);
for(int i=0;i<n;i++) l[i]=1;
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[i]>a[j])
l[i]=max(l[i],l[j]+1);
int ans=l[0];
for(int i=0;i<n;i++) ans=max(ans,l[i]);
cout<<ans;
}

