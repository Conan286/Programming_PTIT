#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,lan=1;
	scanf("%d",&t);
while(t--)	{

			scanf("%d",&n);
				int i;
				printf("Test %d: ",lan++);
			for( i=2;i<=sqrt(n);i++)
			{
				int dem=0;
				while(n%i==0)
				{
					n=n/i;
					dem++;
				}
				if(dem!=0){
				
				printf("%d(%d) ",i,dem);
			}
		}
			if(n!=1)
			{
				printf("%d(1)",n);
			}
			printf("\n");
		
			//	if(dem[i]>0){
				
			//	printf("%d(%d) ",i,dem[i]);
		
	}
}


