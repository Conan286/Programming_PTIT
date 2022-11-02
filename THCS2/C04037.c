#include<stdio.h>
#include<math.h>
void delete(int a[],int *n,int *vitri)
{
	int i;
	for(i=*vitri;i<*n-1;i++)
	{
		// 1 2 3 4 5
		// 1 2 4 5
		a[i]=a[i+1];
	}
}

int main()
{
	int n,i,j,c=0;

		scanf("%d",&n);
		int a[n],b[n];
		int dem[10001];
		for(j=0;j<10001;j++)
		{
			dem[j]=0;
		}
		for( i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
	for(i=0;i<n;i++)
		{
		if(dem[a[i]]>1)
		{
			
			b[c++]=a[i];
		dem[a[i]]=0;
		}
	}
	printf("%d\n",c);
	for(i=0;i<c;i++)
		{
		printf("%d ",b[i]);		
		}
		
}

	

		
		
		
		
		
		
		
		
		
		

