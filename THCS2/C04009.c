#include<stdio.h>
#include<math.h>
int main()
{
int n,i;

	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	int chan[n],le[n];
	int c=0,l=0;
	for( i=0;i<n;i++)
	{
	if(a[i]%2==0){
		chan[c++]=a[i];
	}
	else{
		le[l++]=a[i];
	}
	}
	for( i=0;i<c;i++)
	{
	printf("%d ",chan[i]);
	}
	printf("\n");
	for( i=0;i<l;i++)
	{
	printf("%d ",le[i]);
	}
}
	

