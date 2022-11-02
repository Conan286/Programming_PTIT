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
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int solve(int l[],int n)
{
int res=1;
for(int i=0;i<n;i++)
res=max(res,l[i]);
return res;
}
void qhd(int a[],int n)
{
int l[n];
l[0]=1;
for(int i=1;i<n;i++){
l[i]=1;
for(int j=0;j<i;j++)
if(a[i]>a[j])
l[i]=max(l[i],l[j]+1);
}
cout<<solve(l,n)<<endl;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
qhd(a,n);
}
}

