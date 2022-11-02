#include<stdio.h>
int main()
{
int t,n,i,h,j,dem=1;
scanf("%d",&n);
int a[n];

	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
			
	}
	for(i=0;i<n;i++)
	{
		int swap=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				swap=1;
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
		/*	printf("Buoc %d: ",dem++);
		for(h=0;h<n;h++)
			{
				printf("%d ",a[h]);
				}
				printf("\n");*/	
			}
		}
		if(swap){
		
		printf("Buoc %d: ",dem++);
		for(h=0;h<n;h++)
			{
				printf("%d ",a[h]);
				}
				printf("\n");	
	}
}
}



