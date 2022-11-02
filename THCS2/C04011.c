#include<stdio.h>
int mdx(int a[],int n)
{
int l=0,r=n-1;
while(l<=r)
{
	if(a[l]!=a[r]) return 0;
	l++;
	 r--;
}
return 1;
}
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
int count=1;
		scanf("%d",&n);
		int a[n];
		for( i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for( i=1;i<n;i++)
		{
			int index=1;
			for( j=0;j<i;j++)
			{
				if(a[i]<a[j]) 
				{
				index=0;
				break;
			}
		}
		if(index==1) count++;
	}
	printf("%d\n",count);
}
}
