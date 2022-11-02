#include<stdio.h>
int main()
{
	int t,n,i,j,temp,dem=1;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	int a[n][n],result[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j) a[i][j]=j+1;
			else a[i][j]=0;
		}
	}
	/*
	1 0 0   1 1 1  (00.00+01.01+02.02)  (00.10+01.11+02.12) (00.20+01.21+02.22)
	1 2 0 * 0 2 2  (10.00+11.01+12.02)  (10.10+11.11+12.12) (10.20+11.21+12.22)
	1 2 3   0 0 3  (20.00+21.01+22.02)  (20.10+21.11+22.12) (20.20+21.21+22.22)
	*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			//j=0
			result[i][j]=0;
			for(temp=0;temp<n;temp++){
				//temp=0
			result[i][j]+=a[i][temp]*a[j][temp];
		}
		}
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",result[i][j]);
}
printf("\n");
}
}
}

