#include<stdio.h>
#include<math.h>
/*
int snt(int n)
{
	int i;
for( i=2;i<=sqrt(n);i++)
{
	if(n%i==0) return 0;
}
return (n>1?1:0);
}
int test(int n)
{
	if(snt(n)==0) return 0;
	while(n>9)
	{
		if(snt(n%10)==0) return 0;
		n=n/10;
	}
	return (snt(n)==1?1:0);
}
*/
int main()
{
int t;
int n,i;
		scanf("%d",&t);
		while(t--)
		{
			int dem=0;
		scanf("%d",&n);
		//1<n<7	
		printf("%d = ",n);
		for( i=2;i<=sqrt(n);i++)
		{
			int dem=0;
			while(n%i==0)
			{
				dem++;
				n=n/i;
			}
			if(dem>0){
			
			printf("%d^%d ",i,dem);
			if(n!=1) printf("* ");
		}
	}
		if(n!=1) {
		printf("%d^%d",n,1);
	}
		printf("\n");
	}
}

