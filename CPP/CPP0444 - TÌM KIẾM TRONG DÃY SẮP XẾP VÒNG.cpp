#include<bits/stdc++.h>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define cle(); cin.ignore(200, '\n');
#define M 10001
using namespace std;
int binary(int a[],int x,int l,int r)
{
int m=(l+r)/2;
if(l<=r)
{
if(a[m]==x) return m+1;
else if(a[m]<x) return binary(a,x,m+1,r);
else return binary(a,x,l,m-1);
}
return -1;
}
main()
{
int t,n,x,id,m;
cin>>t;
while(t--)
{
id=m=0;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]>m) id=i,m=a[i];
}
//cout<<id<<" "<<m<<endl;
cout<<((x<a[0])?(binary(a,x,id,n)):(binary(a,x,0,id)))<<endl;
}
}

