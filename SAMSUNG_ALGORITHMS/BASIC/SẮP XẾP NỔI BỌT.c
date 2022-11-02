#include<stdio.h>
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define swap(a,b) int t=a; a=b; b=t;

int main()
{
	int n,buoc=1,i,j,k;
	cin(n);
	int a[n];
	for(i=0;i<n;i++)
	{
		cin(a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		int id=0;
	for(j=0;j<i;j++)
		{
			
			if(a[j]>a[j+1]){
				id=1;
				swap(a[j],a[j+1]);
			}
		}
		if(id){
		
		printf("Buoc %d: ",buoc++);
		for(k=0;k<n;k++)
		{
		cout(a[k]);	
		}
		printf("\n");
	}
}
}
