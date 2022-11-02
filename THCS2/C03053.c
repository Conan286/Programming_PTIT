#include<stdio.h>
int snt(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1?1:0;
}
int main()
{
int t,n,i;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    	if(snt(i)&&snt(n-i))
    	{
    		printf("%d %d ",i,n-i);
		}
	}
	printf("\n");
}
}

