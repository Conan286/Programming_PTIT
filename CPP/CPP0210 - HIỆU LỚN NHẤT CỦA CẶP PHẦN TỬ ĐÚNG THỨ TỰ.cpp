#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
#define N 100001
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int res(int l[],int n)
{
int r=0;
for(int i=0;i<n;i++)
r=max(r,l[i]);
return (r==0?-1:r);
}
main()
{
//init();
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n],l[n];
input(a,n);
memset(l,0,sizeof(l));
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[i]>a[j])
l[i]=max(l[i],a[i]-a[j]);
cout<<res(l,n)<<endl;
}
}

