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
		scanf("%d",&vitri);
int b[n-vitri],c=0;
for( i=0;i<n-vitri;i++)
{
	b[c++]=a[i];
}

//n=10
//1 2 3 4 5 6 7 8 9 10
//8 9 10 1 2 3 4 5 6 7
//vitri=3
for( i=0;i<vitri;i++)
{
a[i]=a[i+n-vitri];
}
for(i=vitri;i<n;i++)
{
	a[i]=b[i-vitri];
}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
/*for( i=0;i<vitri;i++)
{
	a[i]=b[i];
}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}*/
}
	

	

		
		
		
		
		
		
		
		
		
		

