#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[100][100];
	int h1=0,c1=0,hn=2*n-2,cn=2*n-2;
	int temp=n;
	while(n>=1)
	{
		for(i=c1;i<=cn;i++)
		{
			a[h1][i]=n;
		//	printf("a[%d][%d]=%d\n",h1,i,n);
		}
		for(j=h1+1;j<=hn;j++)
		{
			a[j][cn]=n;
		//	printf("a[%d][%d]=%d\n",j,cn,n);
		}
		if(h1!=hn){
			for(i=cn-1;i>=c1;i--)
			{
				a[hn][i]=n;
			//	printf("a[%d][%d]=%d\n",hn,i,n);
			}
		}
		if(c1!=cn)
		{
			for(j=hn-1;j>h1;j--)
			{
				a[j][c1]=n;
				//printf("a[%d][%d]=%d\n",j,c1,n);
			}
		}
		n--;
		c1++;
		h1++;
		cn--;
		hn--;
	}
	for(i=0;i<2*temp-1;i++)
	{
		for(j=0;j<2*temp-1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
