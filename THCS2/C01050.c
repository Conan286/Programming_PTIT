#include<stdio.h>
int main()
{
	int r,d;
	scanf("%d %d",&r,&d);
	int i,j;
	for( i=0;i<d;i++)
	{
		for( j=0;j<r;j++)
		{
			if(i==0||i==d-1||j==0||j==r-1){
			
			printf("*");}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
