#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long

using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int sliding(int a[],int n,int k)
{
int cnt=0,dem=0;
for(int i=0;i<n;i++)
if(a[i]<=k)
++cnt;
for(int i=0;i<cnt;i++)
{
if(a[i]>k) ++dem;
}
int ans=dem;
for(int i=cnt;i<n;++i)
{
if(a[i-cnt]>k)--dem;
if(a[i]>k)++dem;
ans=min(ans,dem);
}
return ans;
}
int main()
{
int t,n,k,b;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
nhap(a,n);
cout<<sliding(a,n,k)<<endl;
}
}





