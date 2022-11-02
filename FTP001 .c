#include<stdio.h>
#include<math.h>

int main()
{
	int m,n,i,j,t,k=1;
	scanf("%d",&n);
	
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("0 ");
	}
	for(j=1;j<n-i;j++)
	{
		printf("%d ",j);
	}
	/*
	n=3
	0123 i=0
	0012 i=1
	0001 i=2
	0000 i=3
	*/
	printf("\n");
}
}
