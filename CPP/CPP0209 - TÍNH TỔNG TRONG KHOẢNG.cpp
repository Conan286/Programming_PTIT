#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
 cin>>a[i];
}
void solve(int a[],int n,int k)
{
int cnt=0;
for(int i=(k%n);cnt<n;i++)
{
if(i>=n) i=0;
cout<<a[i]<<" ";
++cnt;
}
cout<<endl;
}

main()
{
int t, n,x,y,p,q,l,r;
cin>>t;
while(t--)
{
cin>>n>>q;
int a[n],sum[n];
input(a,n);
sum[0]=a[0];
for(int i=1;i<n;i++)
sum[i]=a[i]+sum[i-1];
while(q--)
{
cin>>l>>r;
cout<<sum[r-1]-sum[l-1]+a[l-1]<<endl;
}
}
}

