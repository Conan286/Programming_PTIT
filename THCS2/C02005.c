#include<stdio.h>
int main()
{
	int column,row,i,j,k;
	scanf("%d %d",&row,&column);
	/*
	4 5
*****
~*****
~~***** 
~~~*****
                   */
	for(i=0;i<row;i++){	
	for( j=0;j<i;j++)
	{
		printf("~");
	}
	for(k=0;k<column;k++)
	{
		printf("*");
	}
	printf("\n");
}
}
