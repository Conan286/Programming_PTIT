#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf("%d",2*j);
	}
	for(j=2*i-2;j>=2;j-=2)
	{
		printf("%d",j);
	}
		printf("\n");
	}
}

