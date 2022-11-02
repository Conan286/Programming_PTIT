#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i;
		for( i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				printf("%d ",i);
				n=n/i;
			}
		}
		if(n!=1) printf("%d",n);
		printf("\n");
	}
}
