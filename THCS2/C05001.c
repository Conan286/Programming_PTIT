#include<stdio.h>
#include<math.h>

int main()
{
	int m,n,i,j;
scanf("%d %d",&m,&n);
int a[m][n];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
/*
2 3
1 2 4   00 01 02
3 4 0   10 11 12
        00 10
        01 11
        02 12
*/
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%d ",a[j][i]);
	}
	printf("\n");
}
}
		

