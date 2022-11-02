#include<stdio.h>
#include<math.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define cin(n) scanf("%d",&n);
int binary(int a[],int k,int l,int r)
{
int m=(l+r)/2;
if(l<r){
if(a[m]==k) return m;
else if(a[m]>k) return binary(a,k,l,m-1);
else return binary(a,k,m+1,r);
}
return -1;
}
int main()
{
int t,n,k,i,j;
cin(t)
while(t--)
{
cin(n) cin(k)
int a[n];
for(i=0;i<n;i++)
cin(a[i])
if(binary(a,k,0,n)!=-1) printf("%d\n",binary(a,k,0,n)+1);
else no
}
}
