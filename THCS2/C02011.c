/*
12345
2345      4
345      43
45      432 
5      4321



*/
#include<stdio.h>
int main()
{
int m,n,i,j;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
	if(i<n-1)
	{
	for(j=i+1;j<=n;j++)	{
		printf("%d",j);
	}
	for(j=n-1;j>=n-i;j--)
	{
		printf("%d",j);
	}
	/*
3 5
12345
2345       4 i=1
345       43 i=2
45       432 i=3
	*/
	}
	else{
		for(j=i+1;j>=i+2-n;j--)
		{
			printf("%d",j);
		}
	}
	printf("\n");
}
}

