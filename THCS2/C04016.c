#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int i;
for( i=2;i<=sqrt(n);i++)
{
	if(n%i==0) return 0;
}
return (n>1?1:0);
}
int main()
{
	int t,n,i,j,index=0,k=1;
	scanf("%d",&t);
	while(t--){
	
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
		printf("Test %d:\n",k++);
		for( i=0;i<10001;i++)
		{
			if(dem[i]>0&&snt(i)==1)
			{				
				printf("%d xuat hien %d lan\n",i,dem[i]);
				dem[i]=0;
			}
	}
	
}
}
	

		
		
		
		
		
		
		
		
		
		

