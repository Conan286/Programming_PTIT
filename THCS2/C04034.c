#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,i,j,c=0;
scanf("%d",&t);
while(t--)
{
int c=0;
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
		int id=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>=a[i]){
				id=0;
				break;
			}
		}
		if(id==1)
		{
		b[c++]=a[i];
		}
}
for(i=0;i<c;i++)
{
	for(j=c-1;j>i;j--)
	{
		if(b[j]>b[i])
		{
			b[j]=b[j]+b[i];
			b[i]=b[j]-b[i];
			b[j]=b[j]-b[i];
		}
	}
}
for(i=0;i<c;i++)
{
	printf("%d ",b[i]);
}
printf("\n");
}
}

		
		
		
		
		
		
		
		
		
		

