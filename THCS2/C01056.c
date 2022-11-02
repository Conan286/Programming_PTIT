#include<stdio.h>
int main()
{
	int t;
	long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int index=1;
		while(n>9)
		{
			
			int l=n%10;
			int r=(n/10)%10;
			if(l<r){
				index=0;
				break;
			}
			n=n/10;
			}
			if(index==0)
			{
				printf("NO\n");
				}	
				else{
					printf("YES\n");
				}
	}
}
