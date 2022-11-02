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
//cout<<"Nhap:\n";
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
void solve(int a[][101],int b[][101],int c[][101],int n,int m,int p)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<p;j++)
{
for(int k=0;k<m;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
}
main()
{
int t,n,x,id,m,p;
cin>>n>>m>>p;
int a[n][101],b[m][101],c[n][101];
memset(c,0,sizeof(c));
nhap(a,n,m);
nhap(b,m,p);
solve(a,b,c,n,m,p);
prin(c,n,p);
}
