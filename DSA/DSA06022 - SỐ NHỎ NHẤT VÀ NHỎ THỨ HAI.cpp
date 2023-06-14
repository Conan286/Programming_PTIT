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
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++){
cin>>a[i];
s.insert(a[i]);
}
if(s.size()<2) puts("-1");
else
{
	int cnt=0;
for(auto x:s)
{
cout<<x<<" ";
++cnt;
if(cnt==2) { cout<<endl; break;}
}
}
}
}

