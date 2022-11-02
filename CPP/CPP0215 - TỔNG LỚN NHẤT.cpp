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
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
ll sum(ll a[],ll b[],int m,int n)
{
ll s1=0,s=0,tmp=0;
for(int i=0;i<m;i++)
{
s1+=a[i],tmp=0;
for(int j=i+1;j<n;j++)
tmp+=b[j];
if(s1+tmp>s) s=s1+tmp;
}
return s;
}
main()
{
int t,n,m,k;
cin>>t;
while(t--)
{
cin>>m>>n;
ll a[m],b[n];
nhap(a,m);
nhap(b,n);
cout<<(sum(a,b,m,n)>sum(b,a,n,m)?sum(a,b,m,n):sum(b,a,n,m))<<endl;
}
}

