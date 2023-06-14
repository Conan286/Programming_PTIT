#include<stdio.h>
#define scan(n) scanf("%d",&n);
#define prin(n) printf("%d\n",n);
void nhap(int a[],int n)
{
int i,j;
for(i=0;i<n;i++)
scan(a[i])
}
void solve(int a[],int n)
{
int l[n],r[n],res=1,i,j;
for(i=0;i<n;i++) l[i]=r[i]=1;
for(i=1;i<n;i++)
if(a[i]>a[i-1])
l[i]=l[i-1]+1;
for(i=n-2;i>=0;i--)
if(a[i]>a[i+1])
r[i]=r[i+1]+1;
for( i=0;i<n;i++)
res=res>(l[i]+r[i]-1)?res:(l[i]+r[i]-1);
prin(res)
}

int main()
{
int t,n;
scan(t)
while(t--)
{
scan(n)
int a[n];
nhap(a,n);
solve(a,n);
}
}
