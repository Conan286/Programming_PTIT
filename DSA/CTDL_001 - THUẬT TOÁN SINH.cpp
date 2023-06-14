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
int n;
cin>>n;
int a[n+1];
for(int i=0;i<=n;i++) a[i]=0;
while(ok)
{
if(check(a,n)) in(a,n);
sinh(a,n);
}
}
