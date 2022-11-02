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
using namespace std;
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(ll a[],int n)
{
ll l[n],res=a[0];
l[0]=a[0];
for(int i=1;i<n;i++){
l[i]=a[i];
ll x=0;
for(int j=0;j<i;j++)
if(a[i]>a[j])
x=max(x,l[j]);
l[i]+=x;
}
for(int i=0;i<n;i++) res=max(res,l[i]);
//for(int i=0;i<n;i++) cout<<l[i]<<" ";
cout<<res<<endl;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
nhap(a,n);
solve(a,n);
}
}
