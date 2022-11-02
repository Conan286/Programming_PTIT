#include<stdio.h>
int sg(int n)
{
	//vd : 9876
	while(n>9)
	{
		if((n%10)>=(n/10)%10) return 0;
		n=n/10;
	}
	return 1;
}
int dem(int a,int b)
{
	int i,count=0;
for	(i=a;i<=b;i++)
{
	if(sg(i))
	count++;
}
return count;
}
int main()
{
int t,a,b;
int n,i;
		scanf("%d",&t);
		while(t--)
		{
		scanf("%d %d",&a,&b);
	printf("%d",dem(a,b));
		printf("\n");
	}
}

