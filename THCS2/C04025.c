#include<stdio.h>
int main()
{
int t,n,i,j,l=0,c=0;
scanf("%d",&n);
int a[n];
int chan[n],le[n];
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
			
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j]<a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
	{
		chan[c++]=a[i];
		}
		else{
			le[l++]=a[i];
		}	
	}
	for(i=0;i<c;i++)
	{
		a[i]=chan[i];
	}
	for(i=0;i<l;i++)
	{
		a[i+c]=le[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

