#include<stdio.h>
int snt(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1?1:0;
}
int main()
{
int m,n,i,b,j,t,sum=0;
scanf("%d",&m);
int a[m][m];
for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<m;i++)
{
	for(j=i;j<m;j++)
{
if(snt(a[i][j]))
sum+=a[i][j];
}
}
printf("%d",sum);
}

