#include<stdio.h>
#include<math.h>

int main()
{
int n,t,i,sum=0;


scanf("%d",&n);
int id=0;
for(i=2;i<=sqrt(n);i++)
{
	while(n%i==0)
	{
		if(n%i==0&&id>0)
		{
			printf("x");
		
		}
		printf("%d",i);
			id++;
		n=n/i;
	}
}
if(n!=1)
{
if(id<1){

	printf("%d",n);
}
else{
	printf("x%d",n);
}
}
}

