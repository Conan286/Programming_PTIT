#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		int i;
		for(i=(a<b)?a:b;i>=1;i--)
		{
			if(a%i==0&&b%i==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
