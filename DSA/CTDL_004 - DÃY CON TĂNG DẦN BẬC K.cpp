#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1,dem=0;
int a[1001],x[1001];
void ktao()
{
for(int i=1;i<=n;i++) x[i]=0;
}
void sinh()
{
int i=n;
while(x[i] and i>0)
x[i--]=0;
if(i==0) ok=0;
else x[i]=1;
}
bool check()
{
int b[n],cnt=0;
for(int i=1;i<=n;i++){
if(x[i])
b[cnt++]=a[i];
if(cnt>k) return 0;
}
for(int i=1;i<cnt;i++)
if(b[i]<=b[i-1])
return 0;
return cnt==k;
}
void in()
{
for(int i=1;i<=n;i++)
if(x[i])
cout<<a[i]<<" "; cout<<endl;
}
int main()
{
cin>>n>>k;
for(int i=1;i<=n;i++)
cin>>a[i];
while(ok)
{
if(check()){
++dem;
}
sinh();
}
cout<<dem;
}

