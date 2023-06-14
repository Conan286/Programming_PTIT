#include<bits/stdc++.h>
using namespace std;
int ok=1;
void in(int a[],int n)
{
for(int i=1;i<=n;i++) cout<<a[i]<<" "; cout<<endl;
}
void sinh(int a[],int n)
{
int i=n;
while(a[i]==1&&i>0)
{
a[i]=0;
i--;
}
if(i==0) ok=0;
else a[i]=1;
}
bool check(int a[],int n)
{
int l=1,r=n;
while(l<r)
{
if(a[l++]!=a[r--]) return 0;
}
return 1;
}
int main()
{
int n,k,cnt=0;
cin>>n>>k;
int a[n+1],x[n+1];
for(int i=1;i<=n;i++) cin>>x[i];
memset(a,0,sizeof(a));
while(ok)
{
sinh(a,n);
int s=0;
for(int i=1;i<=n;i++) if(a[i]) s+=x[i];
if(s==k)
{
++cnt;
for(int i=1;i<=n;i++) if(a[i]) cout<<x[i]<<" "; cout<<endl;
}
}
cout<<cnt;
}
