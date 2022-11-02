#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
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
int t, n,x,y,p;
cin>>t;
while(t--)
{
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
cout<<a[x-1]<<endl;
}
}

