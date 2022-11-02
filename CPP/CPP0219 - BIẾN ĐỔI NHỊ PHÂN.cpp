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
#define fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
void nhap(int a[][101],int m,int n)
{
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
void prin(int a[][101],int m,int n)
{
for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
void solve(int a[][101],int m,int n)
{
int h[m],c[n];
memset(h,0,sizeof(h));
memset(c,0,sizeof(c));
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
if(a[i][j]==1)
h[i]=c[j]=1;
else continue;
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
{
if(h[i]||c[j]) cout<<1<<" ";
else cout<<0<<" ";
}
cout<<endl;
}
}
main()
{
int t,n,m,p;
cin>>t;
while(t--)
{
cin>>m>>n;
int a[m][101];
nhap(a,m,n);
solve(a,m,n);
}
}

