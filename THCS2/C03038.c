#include<stdio.h>
#include<math.h>
#include<string.h>
#define nhap(n) scanf("%d",&n)
int main()
{
	int t;
	nhap(t);
	while(t--)
	{
		int n,p,x=0,i=0;
		scanf("%d %d",&n,&p);
		//n!/p^x
		for(i=p;i<=n;i+=p)
		{
			int temp=i;
			while(temp%p==0)
			{
				++x;
				temp=temp/p;
			}
		}
		printf("%d\n",x);
	}
}

