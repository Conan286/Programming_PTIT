#include<stdio.h>
int main()
{
	int row,column,i,j,k;
	scanf("%d %d",&row,&column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("~");
		}
		for(k=0;k<column;k++)
		{
			if(i==0||i==row-1||k==0||k==column-1)
			{
				printf("*");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
}
