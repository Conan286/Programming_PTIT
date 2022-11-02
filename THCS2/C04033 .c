#include<stdio.h>
#include<math.h>

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
		if(dem[a[i]]>0)
		{			
			b[c++]=a[i];
		dem[a[i]]=0;
		}
	}
for(i=0;i<c;i++)
		{
			a[i]=b[i];
		}
		n=c;
		for( i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	}
	

		
		
		
		
		
		
		
		
		
		

