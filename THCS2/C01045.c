#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int end=n%10;
	while(n>9)
	{
		n=n/10;
	}
	printf("%d %d",n,end);
}
