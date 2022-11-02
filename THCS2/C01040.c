#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long sum=0;
	int i;
	for( i=1;i<=n/2;i++)
	{
		if(n%i==0) sum+=i;
	}
	if(sum==n)
	{
		printf("1");
	}
	else{
		printf("0");
	}
}
