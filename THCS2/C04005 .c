#include<stdio.h>
#include<math.h>
int main()
{
int t,n,i;
scanf("%d",&t);
while(t--)
{
	
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	int max=0;
		for( i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
}
printf("%d\n",max);
for( i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			printf("%d ",i);
		}
}
printf("\n");
}
}

