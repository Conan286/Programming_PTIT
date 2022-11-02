#include<stdio.h>
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d\n",n);
#define max(a,b)  a>b?a:b;
void nhap(int a[],int n)
{
int i;
for(i=0;i<n;i++)
cin(a[i])
}
int bitonic(int a[],int n)
{
int increase[n],decrease[n],ans=1,i,j;
for(i=0;i<n;i++)
increase[i]=decrease[i]=1;
for(i=1;i<n;i++)
for( j=0;j<i;j++)
if(a[i]>a[j])
increase[i]=max(increase[i],increase[j]+1);
for( i=n-2;i>=0;i--)
for( j=n-1;j>i;j--)
if(a[i]>a[j])
decrease[i]=max(decrease[i],decrease[j]+1);
for( i=0;i<n;i++)
ans=max(ans,increase[i]+decrease[i]-1);
return ans;
}
int main()
{
int t,n;
cin(t)
while(t--)
{
cin(n)
int a[n];
nhap(a,n);
cout(bitonic(a,n))
}
}

