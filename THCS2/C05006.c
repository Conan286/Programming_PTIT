#include<stdio.h>
int main()
{
int m,n,i,a,b,j;
scanf("%d %d",&m,&n);
int arr[m][n];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
	}
	}
	scanf("%d %d",&a,&b);
	a--;
	b--;
		
		for(j=0;j<n;j++)
		{
		
				
				int temp=arr[a][j];
				arr[a][j]=arr[b][j];
				arr[b][j]=temp;
		
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
}




