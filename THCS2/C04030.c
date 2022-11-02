#include<stdio.h>
int main()
{
	int t,n,dem=1,i,j;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		int a[n],b[n],c[2*n],chan=0,le=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(a[i]>a[j])
				{
					a[i]=a[i]+a[j];
					a[j]=a[i]-a[j];
					a[i]=a[i]-a[j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(b[i]<b[j])
				{
					b[i]=b[i]+b[j];
					b[j]=b[i]-b[j];
					b[i]=b[i]-b[j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			c[chan]=a[i];
			c[le]=b[i];
			chan+=2;
			le+=2;
		}
		printf("Test %d:\n",dem++);
		for(i=0;i<2*n;i++)
		{
			printf("%d ",c[i]);
		}
		printf("\n");
	}
}

