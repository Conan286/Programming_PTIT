#include<stdio.h>
int main()
{
	int n,buoc=0,k;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		
		int min=a[i],idmin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				idmin=j;
			}
		}
		if(idmin!=i)
		{
			int temp=a[idmin];
			a[idmin]=a[i];
			a[i]=temp;
		}
		printf("Buoc %d: ",++buoc);
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
// Footer
// © 2022 GitHub, Inc.
// Footer navigation
// Terms
// Priv
