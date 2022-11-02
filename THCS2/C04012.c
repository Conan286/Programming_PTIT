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
	int t,n,i,j,index=0;
int dem[10001];
for(i=0;i<10001;i++)
{
	dem[i]=0;
}
		scanf("%d",&n);
		int a[n];
		for( i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
		for( i=0;i<n;i++)
		{
			if(dem[a[i]]>1)
			{
				index=1;
				printf("%d ",a[i]);
				dem[a[i]]=0;
			}
	}
	if(index==0)
	{
		printf("0");
	}
}
		
		
		
		
		
		
		
		
		
		

