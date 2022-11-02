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
int sliding(int a[],int n,int k,int b)
{
int l[n+1];
for(int i=1;i<=n;i++) l[i]=1;
for(int i=0;i<b;i++) l[a[i]]=0;
int cnt=0;
for(int i=1;i<=k;i++) if(l[i]==1)++cnt;
int ans=cnt;
for(int i=k+1;i<=n;i++)
{
if(l[i-k]) --cnt;
if(l[i])++cnt;
ans=max(cnt,ans);
}
// 1011011100 k=6
return k-ans;
}
int main()
{
int t,n,k,b;
cin>>n>>k>>b;
int a[b];
nhap(a,b);
cout<<sliding(a,n,k,b)<<endl;
}





