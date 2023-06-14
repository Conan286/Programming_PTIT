#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int binary(int a[],int x,int l,int r)
{
if(l<r)
{
int m=(l+r)/2;
if(a[m]==x) return m;
else if(a[m]>x) return binary(a,x,l,m-1);
else return binary(a,x,m+1,r);
}
return -1;
}
main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
int ans=-1;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]==k) ans=1;
}
cout<<ans<<endl;
}
}

