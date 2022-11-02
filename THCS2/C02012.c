/*
1 234
21 23
321 2
i<n
4321
5432
6543



*/
#include<stdio.h>
int main()
{
int m,n,i,j;
scanf("%d %d",&m,&n);
for(i=1;i<=m;i++)
{
	//5 3
	if(i<n)
	{
	for(j=i;j>=1;j--)
	{
		printf("%d",j);
	}
	for(j=2;j<=n-i+1;j++)
	{
			printf("%d",j);
	}
	}
	else{ 
		for(j=i;j>=i-n+1;j--)
		{
			printf("%d",j);
		}
	}
	
	printf("\n");
}
}

