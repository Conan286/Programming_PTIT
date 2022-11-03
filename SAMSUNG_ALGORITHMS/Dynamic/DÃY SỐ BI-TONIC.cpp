#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long
#define INT_MAX 1e9
#define yes puts("YES");
#define no puts("NONE");
using namespace std;
int bitonic(int a[],int n);
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<bitonic(a,n)<<endl;
}
}
int bitonic(int a[],int n)
{
int in[n],de[n],ans=0;
for(int i=0;i<n;i++) in[i]=de[i]=a[i];
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[i]>a[j])
in[i]=max(in[i],a[i]+in[j]);
for(int i=n-2;i>=0;i--)
for(int j=n-1;j>i;j--)
if(a[i]>a[j])
de[i]=max(de[i],a[i]+de[j]);
for(int i=0;i<n;i++)
ans=max(ans,in[i]+de[i]-a[i]);
return ans;
}
