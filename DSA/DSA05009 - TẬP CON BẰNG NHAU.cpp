#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define yes puts("YES");
#define no puts("NO");
#define scan(n) scanf("%d",&n);
#define N 10001
int check(int a[],int n)
{
 int s=0,i,j;
 for(i=0;i<n;i++) s+=a[i];
 if(s%2!=0||n<2) return 0;
 int sum[N];
 memset(sum,0,sizeof(sum));
 sum[0]=1;
 for(i=0;i<n;i++)
 for(j=s;j>=a[i];j--)
 if(!sum[j] && sum[j-a[i]])
 sum[j]=1;
 return sum[s/2];
}
int main()
{
	int t,n,i;
	scan(t)
	while(t--)
	{
	scan(n)
	int a[n];
	for(i=0;i<n;i++) scan(a[i])
	if(check(a,n)) yes
	else no
	}
}
