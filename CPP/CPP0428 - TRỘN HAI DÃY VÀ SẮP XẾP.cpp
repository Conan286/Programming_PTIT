#include<iostream>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#include<algorithm>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(int a[],int b[],int m,int n)
{
int i=0,j=0;
while(i<m&&j<n)
{
cout<<(a[i]<b[j]?a[i++]:b[j++])<<" ";
}
while(i<m)
cout<<a[i++]<<" ";
while(j<n)
cout<<b[j++]<<" ";
cout<<endl;
}
main()
{
int t,n,x,id,m;
cin>>t;
while(t--)
{
cin>>m>>n;
int a[m],b[n];
nhap(a,m);
nhap(b,n);
sort(a,a+m);
sort(b,b+n);
solve(a,b,m,n);
}
}

