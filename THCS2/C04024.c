#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,i,j,vitri,k=1;
/*	scanf("%d",&t);
/*	while(t--){
	
int dem[10001];
for(i=0;i<10001;i++)
{
	dem[i]=0;
}*/
		scanf("%d",&n);
		int a[n];
		for( i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(a[i]<a[j])
				{
					//4>3
					//i=4+3=7
					//i=7-4
					a[i]=a[i]+a[j];
					a[j]=a[i]-a[j];
					a[i]=a[i]-a[j];
				}
			}
			
		}
		
	for( i=0;i<n;i++)
		{
			printf("%d ",a[i]);
			
		}
	}

	

		
		
		
		
		
		
		
		
		
		

