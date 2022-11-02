#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
using namespace std;
int binary(int a[],int n,int l,int r)
{
int m=(l+r)/2;
while(l<=r)
{
if(a[m]==n) return 1;
if(a[m]>n) return binary(a,n,0,m-1);
else return binary(a,n,m+1,r);
}
return -1;
}
main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cout<<binary(a,k,0,n)<<endl;
}
}


