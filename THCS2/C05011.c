#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int t,m,n,i,j,temp,dem=1;
scanf("%d",&t);
while(t--)
{
	scanf("%d %d",&m,&n);
	int a[m][n],ar[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	/* 3.2*2.3
	1 2      1 2    (00.00+01.01) (00.10+01.11) (00.20+01.21)
	3 4   *  3 4 -> (10.00+11.01) (10.10+11.11) (10.20+11.21)
	5 6      5 6    (20.00+21.01) (20.10+21.11) (20.20+21.21)

	*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			ar[i][j]=0;
			for(temp=0;temp<n;temp++)
			ar[i][j]+=a[i][temp]*a[j][temp];
		}
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
}
}


