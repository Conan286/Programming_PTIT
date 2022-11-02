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
map<int,int>mp;
bool cmp1(int x,int y)
{
 return mp[x]<mp[y];
}
bool cmp2(int x,int y)
{
 return x<y;
}
int main()
{
int t,m,n;
cin>>t;
while(t--)
{
mp.clear();
cin>>m>>n;
int a[m],b[n],c[m],d[m],x=0,y=0;
for(int i=0;i<m;i++) cin>>a[i];
for(int j=0;j<n;j++) cin>>b[j],mp[b[j]]=j+1;
for(int j=0;j<n;j++) mp[b[j]]=min(j+1,mp[b[j]]);
for(int i=0;i<m;i++) 
{
if(mp[a[i]]>0) c[x++]=a[i];
else d[y++]=a[i];
}
sort(c,c+x,cmp1);
sort(d,d+y,cmp2);
//cout<<x<<" "<<y<<endl;
for(int i=0;i<x;i++) cout<<c[i]<<" ";
for(int i=0;i<y;i++) cout<<d[i]<<" ";
cout<<endl;
}
}




